//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSDateFormatter, NSMutableDictionary, NSMutableSet, NSString;

@interface FMDatabase : NSObject
{
    void *_db;	// 8 = 0x8
    NSString *_databasePath;	// 16 = 0x10
    _Bool _logsErrors;	// 24 = 0x18
    _Bool _crashOnErrors;	// 25 = 0x19
    _Bool _traceExecution;	// 26 = 0x1a
    _Bool _checkedOut;	// 27 = 0x1b
    _Bool _shouldCacheStatements;	// 28 = 0x1c
    _Bool _isExecutingStatement;	// 29 = 0x1d
    _Bool _inTransaction;	// 30 = 0x1e
    double _maxBusyRetryTimeInterval;	// 32 = 0x20
    double _startBusyRetryTime;	// 40 = 0x28
    NSMutableDictionary *_cachedStatements;	// 48 = 0x30
    NSMutableSet *_openResultSets;	// 56 = 0x38
    NSMutableSet *_openFunctions;	// 64 = 0x40
    NSDateFormatter *_dateFormat;	// 72 = 0x48
}

+ (id)storeableDateFormat:(id)arg1;
+ (_Bool)isSQLiteThreadSafe;
+ (id)sqliteLibVersion;
+ (int)FMDBVersion;
+ (id)FMDBUserVersion;
+ (id)databaseWithPath:(id)arg1;
@property _Bool traceExecution; // @synthesize traceExecution=_traceExecution;
@property _Bool checkedOut; // @synthesize checkedOut=_checkedOut;
@property _Bool crashOnErrors; // @synthesize crashOnErrors=_crashOnErrors;
@property _Bool logsErrors; // @synthesize logsErrors=_logsErrors;
@property(retain) NSMutableDictionary *cachedStatements; // @synthesize cachedStatements=_cachedStatements;
- (void).cxx_destruct;
- (void)makeFunctionNamed:(id)arg1 maximumArguments:(int)arg2 withBlock:(CDUnknownBlockType)arg3;
- (void)setShouldCacheStatements:(_Bool)arg1;
- (_Bool)shouldCacheStatements;
- (id)inSavePoint:(CDUnknownBlockType)arg1;
- (_Bool)rollbackToSavePointWithName:(id)arg1 error:(id *)arg2;
- (_Bool)releaseSavePointWithName:(id)arg1 error:(id *)arg2;
- (_Bool)startSavePointWithName:(id)arg1 error:(id *)arg2;
- (_Bool)inTransaction;
- (_Bool)beginTransaction;
- (_Bool)beginDeferredTransaction;
- (_Bool)commit;
- (_Bool)rollback;
- (_Bool)update:(id)arg1 withErrorAndBindings:(id *)arg2;
- (_Bool)executeUpdate:(id)arg1 withErrorAndBindings:(id *)arg2;
- (_Bool)executeStatements:(id)arg1 withResultBlock:(CDUnknownBlockType)arg2;
- (_Bool)executeStatements:(id)arg1;
- (_Bool)executeUpdateWithFormat:(id)arg1;
- (_Bool)executeUpdate:(id)arg1 withVAList:(char *)arg2;
- (_Bool)executeUpdate:(id)arg1 withParameterDictionary:(id)arg2;
- (_Bool)executeUpdate:(id)arg1 values:(id)arg2 error:(id *)arg3;
- (_Bool)executeUpdate:(id)arg1 withArgumentsInArray:(id)arg2;
- (_Bool)executeUpdate:(id)arg1;
- (_Bool)executeUpdate:(id)arg1 error:(id *)arg2 withArgumentsInArray:(id)arg3 orDictionary:(id)arg4 orVAList:(char *)arg5;
- (id)executeQuery:(id)arg1 withVAList:(char *)arg2;
- (id)executeQuery:(id)arg1 values:(id)arg2 error:(id *)arg3;
- (id)executeQuery:(id)arg1 withArgumentsInArray:(id)arg2;
- (id)executeQueryWithFormat:(id)arg1;
- (id)executeQuery:(id)arg1;
- (id)executeQuery:(id)arg1 withArgumentsInArray:(id)arg2 orDictionary:(id)arg3 orVAList:(char *)arg4;
- (id)executeQuery:(id)arg1 withParameterDictionary:(id)arg2;
- (void)extractSQL:(id)arg1 argumentsList:(char *)arg2 intoString:(id)arg3 arguments:(id)arg4;
- (void)bindObject:(id)arg1 toColumn:(int)arg2 inStatement:(struct sqlite3_stmt *)arg3;
- (int)changes;
- (long long)lastInsertRowId;
- (id)lastError;
- (id)errorWithMessage:(id)arg1;
- (int)lastErrorCode;
- (_Bool)hadError;
- (id)lastErrorMessage;
- (_Bool)databaseExists;
- (void)warnInUse;
- (_Bool)goodConnection;
- (id)stringFromDate:(id)arg1;
- (id)dateFromString:(id)arg1;
- (void)setDateFormat:(id)arg1;
- (_Bool)hasDateFormatter;
- (_Bool)setKeyWithData:(id)arg1;
- (_Bool)setKey:(id)arg1;
- (_Bool)rekeyWithData:(id)arg1;
- (_Bool)rekey:(id)arg1;
- (void)setCachedStatement:(id)arg1 forQuery:(id)arg2;
- (id)cachedStatementForQuery:(id)arg1;
- (void)clearCachedStatements;
- (void)resultSetDidClose:(id)arg1;
- (void)closeOpenResultSets;
- (_Bool)hasOpenResultSets;
- (void)setBusyRetryTimeout:(int)arg1;
- (int)busyRetryTimeout;
- (double)maxBusyRetryTimeInterval;
- (void)setMaxBusyRetryTimeInterval:(double)arg1;
- (_Bool)close;
- (_Bool)openWithFlags:(int)arg1 vfs:(id)arg2;
- (_Bool)openWithFlags:(int)arg1;
- (_Bool)open;
- (const char *)sqlitePath;
- (void *)sqliteHandle;
- (id)databasePath;
- (void)dealloc;
- (void)finalize;
- (id)initWithPath:(id)arg1;
- (id)init;

@end
