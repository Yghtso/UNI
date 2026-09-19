//
// Created by yghtso on 12/23/25.
//

#ifndef STM_OGGETTIVIAGGIO_H
#define STM_OGGETTIVIAGGIO_H
#include <iosfwd>

class OggettiViaggio {
 public:
  OggettiViaggio();
  friend std::ostream& operator<<(std::ostream& os, const OggettiViaggio& og);
  void aggiungi(const char* descr);
  void prendi(const char* descr) const;
  void viaggia() const;
  OggettiViaggio(const OggettiViaggio& other);

  ~OggettiViaggio();
  void rimuovi(const char* descr);
  OggettiViaggio& operator+=(const OggettiViaggio& other);
  OggettiViaggio operator!() const;

 private:
  class Item {
   public:
    friend OggettiViaggio;
    friend std::ostream& operator<<(std::ostream& os, const OggettiViaggio& og);

   private:
    char m_description[40 + 1]{};
    bool m_taken = false;
    Item* m_next = nullptr;
  };

  Item* m_head = nullptr;
  Item* m_tail = nullptr;
};

#endif  // STM_OGGETTIVIAGGIO_H
