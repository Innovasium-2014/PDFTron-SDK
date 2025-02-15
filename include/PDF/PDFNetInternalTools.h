//---------------------------------------------------------------------------------------
// Copyright (c) 2001-2020 by PDFTron Systems Inc. All Rights Reserved.
// Consult legal.txt regarding legal and license information.
//---------------------------------------------------------------------------------------
// !Warning! This file is autogenerated, modify the .codegen file, not this one
// (any changes here will be wiped out during the autogen process)

#ifndef PDFTRON_H_CPPPDFPDFNetInternalTools
#define PDFTRON_H_CPPPDFPDFNetInternalTools
#include <C/PDF/TRN_PDFNetInternalTools.h>
#include <Common/BasicTypes.h>
#include <Common/UString.h>

namespace pdftron { namespace PDF { 
class PDFDoc;

/**
 * The class PDFNetInternalTools.
 * Encapsulates the conversion of a single document from one format to another.
 *
 * DocumentConversion instances are created through methods belonging to
 * the Convert class. See Convert.WordToPDFConversion for an example.
 */
class PDFNetInternalTools
{
public:
	//enums:
	enum LogBackend {
		eDebugger = 0,
		eDisk = 1,
		eCallback = 2,
		eConsole = 3
	};
	enum LogLevel {
		eTrace = 0,
		eDebug = 1,
		eInfo = 2,
		eWarning = 3,
		eError = 4,
		eFatal = 5,
		eDisabled = 6
	};

	//methods:
	
	/**
	 * Find out whether the logging system is built into this particular binary.
	 * 
	 * @return returns true if TRN_LOG_ENABLE is defined in core.
	 */
	static bool IsLogSystemAvailable();
	
	/**
	 * Attempt to configure the logging ssytem with a json configuration file.
	 * 
	 * @param config_string -- Configuration Data in json form.
	 * @return Indicates if the configuration was successful.
	 */
	static bool ConfigureLogFromJsonString(UString config_string);
	
	/**
	 * Get the default configuration json file. You could then modify it and pass it into ConfigureLogFromJsonString.
	 * 
	 * @return The json string representing the default log configuration.
	 */
	static UString GetDefaultConfigFile();
	
	/**
	 * Log a message to a particular stream using the core logging routines.
	 * 
	 * @param threshold -- the importance of this log message.
	 * @param message -- the message to be logged.
	 * @param filename -- the filename from which the log message originates.
	 * @param line_number -- the line number from which the log message originates.
	 */
	static void LogMessage(LogLevel threshold, UString message, UString filename, UInt32 line_number);
	
	/**
	 * Log a message to a particular stream using the core logging routines.
	 * 
	 * @param threshold -- the importance of this log message.
	 * @param stream -- the name of the stream to which the message belongs (a category label).
	 * @param message -- the message to be logged.
	 * @param filename -- the filename from which the log message originates.
	 * @param line_number -- the line number from which the log message originates.
	 */
	static void LogStreamMessage(LogLevel threshold, UString stream, UString message, UString filename, UInt32 line_number);
	
	/**
	 * Set the directory and filename to log to. If the directory does not exist, it will be created.
	 * 
	 * @param log_directory -- the path of the directory to log into.
	 * @param log_filename -- the name of the file to log into.
	 * @return returns true we were able to open a log file successfully.
	 */
	static bool SetLogLocation(UString log_directory, UString log_filename);
	
	/**
	 * Set the filename to log to.
	 * 
	 * @param log_filename -- the name of the file to log into.
	 * @return returns true we were able to open a log file successfully.
	 */
	static bool SetLogFileName(UString log_filename);
	
	/**
	 * set the log level for some particular stream.
	 * 
	 * @param stream_name -- the name of the stream you wish to configure.
	 * @param stream_threshold -- the stream threshold. Entries with a priority greater than or equal to this level will be logged.
	 */
	static void SetThresholdForLogStream(UString stream_name, LogLevel stream_threshold);
	
	/**
	 * set the log level for streams that do not otherwise have their level set.
	 * 
	 * @param threshold -- Entries with a priority greater than or equal to this level will be logged.
	 */
	static void SetDefaultLogThreshold(LogLevel threshold);
	
	/**
	 * set the global log cutoff. *No* log statements with a level less than this will pass.
	 * 
	 * @param threshold -- The threshold. Entries with a priority greater than or equal to this level will be logged.
	 */
	static void SetCutoffLogThreshold(LogLevel threshold);
	
	/**
	 * Enable a particular log backend.
	 * 
	 * @param backend -- The log backend to enable.
	 * @return Returns true if the backend is available and functioning.
	 */
	static bool EnableLogBackend(LogBackend backend);
	
	/**
	 * Disable a particular log backend.
	 * 
	 * @param backend -- The log backend to disable.
	 */
	static void DisableLogBackend(LogBackend backend);
	
	/**
	 * Get a summary of the held tiles of all the know instances of PDFViewImplTiled.
	 * 
	 * @return The json string representing the tile summary.
	 */
	static UString GetPDFViewTileSummary();

};

#include <Impl/PDFNetInternalTools.inl>
} //end pdftron
} //end PDF


#endif //PDFTRON_H_CPPPDFPDFNetInternalTools
