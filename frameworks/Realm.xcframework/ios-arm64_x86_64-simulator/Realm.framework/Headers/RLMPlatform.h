////////////////////////////////////////////////////////////////////////////
//
// Copyright 2014 Realm Inc.
//
// Licensed under the Apache License, Version 2.0 (the "License");
// you may not use this file except in compliance with the License.
// You may obtain a copy of the License at
//
// http://www.apache.org/licenses/LICENSE-2.0
//
// Unless required by applicable law or agreed to in writing, software
// distributed under the License is distributed on an "AS IS" BASIS,
// WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
// See the License for the specific language governing permissions and
// limitations under the License.
//
////////////////////////////////////////////////////////////////////////////

#ifdef REALM_BUILDING_FOR_MACOS
#if !__is_target_os(macosx)
#error Attempting to use Realm's macOS framework in a non-macOS target.
#endif
#endif

#ifdef REALM_BUILDING_FOR_MACCATALYST
#if !__is_target_os(ios) || !__is_target_environment(macabi)
#error Attempting to use Realm's Catalyst framework in a non-Catalyst target.
#endif
#endif

#if !__is_target_os(ios) || __is_target_environment(macabi)
#error Attempting to use Realm's iOS framework in a non-iOS target.
#endif

#ifdef REALM_BUILDING_FOR_TVOS
#if !__is_target_os(tvos)
#error Attempting to use Realm's tvOS framework in a non-tvOS target.
#endif
#endif

#ifdef REALM_BUILDING_FOR_WATCHOS
#if !__is_target_os(watchos)
#error Attempting to use Realm's watchOS framework in a non-watchOS target.
#endif
#endif
#define REALM_IOPLATFORMUUID @""
