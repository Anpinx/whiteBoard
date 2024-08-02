/*
 * Copyright (C) 2015-2018 Département de l'Instruction Publique (DIP-SEM)
 *
 * Copyright (C) 2013 Open Education Foundation
 *
 * Copyright (C) 2010-2013 Groupement d'Intérêt Public pour
 * l'Education Numérique en Afrique (GIP ENA)
 *
 * This file is part of OpenBoard.
 *
 * OpenBoard is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, version 3 of the License,
 * with a specific linking exception for the OpenSSL project's
 * "OpenSSL" library (or with modified versions of it that use the
 * same license as the "OpenSSL" library).
 *
 * OpenBoard is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with OpenBoard. If not, see <http://www.gnu.org/licenses/>.
 */




#if !defined(EA_FF53E894_11D7_4c64_A409_DBC97C9EF3CF__INCLUDED_)
#define EA_FF53E894_11D7_4c64_A409_DBC97C9EF3CF__INCLUDED_

#include "Object.h"

#include <string>

class PageParser
{
friend class Parser;

public:
   PageParser(const std::string & pageContent);
   ~PageParser();
   unsigned int getPageNumber()
   {
      return _pageNumber;
   }
   void merge(const Page & sourcePage);

   void recalculateObjectNumbers(unsigned int & newNumber);
   std::string & getPageContent();
   const std::map <unsigned int, Object *> &  getPageRefs();

private:
   //methods


   //members
   Object * _root;
   unsigned int _pageNumber;

};
#endif // !defined(EA_FF53E894_11D7_4c64_A409_DBC97C9EF3CF__INCLUDED_)

