// StaDb, OpenSTA on OpenDB
// Copyright (c) 2019, Parallax Software, Inc.
// 
// This program is free software: you can redistribute it and/or modify
// it under the terms of the GNU General Public License as published by
// the Free Software Foundation, either version 3 of the License, or
// (at your option) any later version.
// 
// This program is distributed in the hope that it will be useful,
// but WITHOUT ANY WARRANTY; without even the implied warranty of
// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
// GNU General Public License for more details.
// 
// You should have received a copy of the GNU General Public License
// along with this program.  If not, see <https://www.gnu.org/licenses/>.

#ifndef STA_DB_OPENSTADB_H
#define STA_DB_OPENSTADB_H

#include "opendb/db.h"
#include "Sta.hh"

namespace sta {

class DbNetwork;

using odb::dbDatabase;

class StaDb : public Sta
{
public:
  StaDb();
  void init(dbDatabase *db);
  DbNetwork *dbNetwork();

protected:
  virtual void makeNetwork();

  dbDatabase *db_;
};

} // namespace
#endif