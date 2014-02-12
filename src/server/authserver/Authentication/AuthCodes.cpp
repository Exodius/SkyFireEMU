/*
  *  Copyright (C) 2011-2014 Project SkyFire <http://www.projectskyfire.org/>
  *  Copyright (C) 2008-2014 TrinityCore <http://www.trinitycore.org/>
  *  Copyright (C) 2005-2014 MaNGOS <http://getmangos.com/>
  *
  *  This program is free software; you can redistribute it and/or modify it
  *  under the terms of the GNU General Public License as published by the
  *  Free Software Foundation; either version 3 of the License, or (at your
  *  option) any later version.
  *
  *  This program is distributed in the hope that it will be useful, but WITHOUT
  *  ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or
  *  FITNESS FOR A PARTICULAR PURPOSE. See the GNU General Public License for
  *  more details.
  *
  *  You should have received a copy of the GNU General Public License along
  *  with this program. If not, see <http://www.gnu.org/licenses/>.
  */

#include "AuthCodes.h"

namespace AuthHelper
{
    bool IsPreBCAcceptedClientBuild(int build)
    {
        int accepted_versions[] = PRE_BC_ACCEPTED_CLIENT_BUILD;

        for (int i = 0; accepted_versions[i]; ++i)
            if (build == accepted_versions[i])
                return true;

        return false;
    }

    bool IsPostBCAcceptedClientBuild(int build)
    {
        int accepted_versions[] = POST_BC_ACCEPTED_CLIENT_BUILD;

        for (int i = 0; accepted_versions[i]; ++i)
            if (build == accepted_versions[i])
                return true;

        return false;
    }

    bool IsPostWotLKAcceptedClientBuild(int build)
    {
        int accepted_versions[] = POST_WOTLK_ACCEPTED_CLIENT_BUILD;

        for (int i = 0; accepted_versions[i]; ++i)
            if (build == accepted_versions[i])
                return true;

        return false;
    }

    bool IsAcceptedClientBuild(int build)
    {
        return (IsPostWotLKAcceptedClientBuild(build) || IsPostBCAcceptedClientBuild(build) || IsPreBCAcceptedClientBuild(build));
    }
};
