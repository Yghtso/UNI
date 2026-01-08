//
// Created by yghtso on 1/6/26.
//

#include "Timeline.h"

#include <cstring>
#include <ostream>

Timeline::Timeline() = default;

Timeline::~Timeline() {
  const Photo* current = m_head;
  while (current) {
    const Photo* tmp = current;
    current = current->next;
    delete[] tmp->name;
    delete tmp;
  }
}

void Timeline::pubblica(const char* str, const bool ev) {
  const auto new_photo = new Photo{nullptr, ev, new char[strlen(str) + 1]};
  strcpy(new_photo->name, str);

  if (!m_head || ev) {
    new_photo->next = m_head;
    m_head = new_photo;
    return;
  }

  Photo* current = m_head;
  Photo* previous = nullptr;

  while (current) {
    if (!current->in_evidence) {
      break;
    }
    previous = current;
    current = current->next;
  }

  if (!previous) {
    new_photo->next = m_head;
    m_head = new_photo;
    return;
  }

  new_photo->next = current;
  previous->next = new_photo;
}

void Timeline::cancella(const char* str) {
  if (!m_head) return;

  Photo* current = m_head;
  Photo* previous = nullptr;

  while (current) {
    if (strcmp(current->name, str) == 0) {
      break;
    }

    previous = current;
    current = current->next;
  }

  if (!current) return;

  if (!previous) {
    m_head = current->next;
  } else {
    previous->next = current->next;
  }

  delete[] current->name;
  delete current;
}

std::ostream& operator<<(std::ostream& os, const Timeline& tl) {
  os << "-----" << std::endl;
  for (Timeline::Photo* current = tl.m_head; current; current = current->next) {
    os << (current->in_evidence ? "(*)" : "") << current->name << std::endl;
  }
  os << "-----" << std::endl;
  return os;
}

bool operator!(Timeline& tl) {
  bool eliminated = false;

  while (tl.m_head) {
    if (!tl.m_head->in_evidence) {
      break;
    }

    eliminated = true;
    const Timeline::Photo* tmp = tl.m_head;
    tl.m_head = tl.m_head->next;
    delete[] tmp->name;
    delete tmp;
  }

  return eliminated;
}

void Timeline::mettiInEvidenza(const char* str) {
  Photo* current = m_head;
  Photo* previous = nullptr;

  while (current) {
    if (strcmp(current->name, str) == 0) {
      break;
    }
    previous = current;
    current = current->next;
  }
  if (!current || current->in_evidence) return;

  if (!previous) {
    m_head = m_head->next;
  } else {
    previous->next = current->next;
  }

  current->in_evidence = true;
  current->next = m_head;
  m_head = current;
}
