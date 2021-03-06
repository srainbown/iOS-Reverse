//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface MessageDAO : NSObject
{
    struct sqlite3 *_db;
}

@property(nonatomic) struct sqlite3 *db; // @synthesize db=_db;
- (_Bool)update:(id)arg1;
- (_Bool)updateMessageStateWithFlag:(long long)arg1 state:(long long)arg2;
- (_Bool)clearWithId:(id)arg1;
- (_Bool)delete:(id)arg1;
- (id)findAllWithId:(id)arg1;
- (_Bool)insert:(id)arg1;
- (_Bool)closeDB;
- (_Bool)openDB;
- (id)getCreateTableString;
- (id)dbPath;
- (id)init;

@end

