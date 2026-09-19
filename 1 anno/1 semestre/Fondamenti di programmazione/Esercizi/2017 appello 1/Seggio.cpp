//
// Created by yghtso on 1/6/26.
//

#include "Seggio.h"

#include <iostream>
#include <ostream>

Seggio::Seggio() = default;

Seggio::~Seggio() {
  const Elettore* current = m_head;
  while (current) {
    const Elettore* tmp = current;
    current = current->next;
    delete tmp;
  }
}

void Seggio::nuovoElettore(const int id) {
  auto* new_elettore = new Elettore{id, nullptr};

  m_elettori++;

  if (!m_tail) {
    m_head = m_tail = new_elettore;
    return;
  }

  m_tail = m_tail->next = new_elettore;
}

std::ostream& operator<<(std::ostream& os, const Seggio& seg) {
  os << "Elettori che hanno votato: " << seg.m_voti << std::endl;

  unsigned counter = 0;
  for (const Seggio::Elettore* current = seg.m_head; counter < seg.m_voti;
       current = current->next, counter++) {
    os << "->" << current->id;
  }

  os << std::endl
     << "Elettori in coda: " << seg.m_elettori - seg.m_voti << std::endl;

  return os;
}

void Seggio::nuovoVoto(const voto v) {
  if (m_elettori - m_voti == 0) return;

  m_voti++;
  if (v == favorevole) m_voti_favorevoli++;
}

void Seggio::spoglioDeiVoti() const {
  if (m_elettori - m_voti == 0) {
    unsigned voti_contrari = m_voti - m_voti_favorevoli;
    std::cout << "Favorevoli: " << m_voti_favorevoli << std::endl
              << "Contrari: " << voti_contrari << std::endl
              << "Vittoria dei "
              << (m_voti_favorevoli < voti_contrari ? "contrari" : "favorevoli")
              << '!' << std::endl;
  } else {
    std::cout << "Spoglio impossibile!" << std::endl;
  }
}
