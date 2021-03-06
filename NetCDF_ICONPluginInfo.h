// Copyright (c) Lawrence Livermore National Security, LLC and other VisIt
// Project developers.  See the top-level LICENSE file for dates and other
// details.  No copyright assignment is required to contribute to VisIt.

// ****************************************************************************
//  NetCDF_ICONPluginInfo.h
// ****************************************************************************

#ifndef NETCDF_ICON_PLUGIN_INFO_H
#define NETCDF_ICON_PLUGIN_INFO_H
#include <DatabasePluginInfo.h>
#include <database_plugin_exports.h>

class avtDatabase;
class avtDatabaseWriter;

// ****************************************************************************
//  Class: NetCDF_ICONDatabasePluginInfo
//
//  Purpose:
//    Classes that provide all the information about the NetCDF_ICON plugin.
//    Portions are separated into pieces relevant to the appropriate
//    components of VisIt.
//
//  Programmer: generated by xml2info
//  Creation:   omitted
//
//  Modifications:
//
// ****************************************************************************

class NetCDF_ICONGeneralPluginInfo : public virtual GeneralDatabasePluginInfo
{
  public:
    virtual const char *GetName() const;
    virtual const char *GetVersion() const;
    virtual const char *GetID() const;
    virtual bool  EnabledByDefault() const;
    virtual bool  HasWriter() const;
    virtual std::vector<std::string> GetDefaultFilePatterns() const;
    virtual bool  AreDefaultFilePatternsStrict() const;
    virtual bool  OpensWholeDirectory() const;
};

class NetCDF_ICONCommonPluginInfo : public virtual CommonDatabasePluginInfo, public virtual NetCDF_ICONGeneralPluginInfo
{
  public:
    virtual DatabaseType              GetDatabaseType();
    virtual avtDatabase              *SetupDatabase(const char * const *list,
                                                    int nList, int nBlock);
};

class NetCDF_ICONMDServerPluginInfo : public virtual MDServerDatabasePluginInfo, public virtual NetCDF_ICONCommonPluginInfo
{
  public:
    // this makes compilers happy... remove if we ever have functions here
    virtual void dummy();
};

class NetCDF_ICONEnginePluginInfo : public virtual EngineDatabasePluginInfo, public virtual NetCDF_ICONCommonPluginInfo
{
  public:
    virtual avtDatabaseWriter        *GetWriter(void);
};

#endif
