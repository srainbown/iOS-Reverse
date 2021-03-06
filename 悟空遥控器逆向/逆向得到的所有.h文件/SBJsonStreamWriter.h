//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableArray, NSMutableDictionary, NSString, SBJsonStreamWriterState;

@interface SBJsonStreamWriter : NSObject
{
    NSMutableDictionary *cache;
    _Bool humanReadable;
    _Bool sortKeys;
    NSString *error;
    unsigned long long maxDepth;
    SBJsonStreamWriterState *state;
    NSMutableArray *stateStack;
    CDUnknownBlockType sortKeysComparator;
    id <SBJsonStreamWriterDelegate> delegate;
}

+ (void)initialize;
@property id <SBJsonStreamWriterDelegate> delegate; // @synthesize delegate;
@property(copy) CDUnknownBlockType sortKeysComparator; // @synthesize sortKeysComparator;
@property _Bool sortKeys; // @synthesize sortKeys;
@property _Bool humanReadable; // @synthesize humanReadable;
@property(readonly, nonatomic) NSMutableArray *stateStack; // @synthesize stateStack;
@property(nonatomic) SBJsonStreamWriterState *state; // @synthesize state;
@property unsigned long long maxDepth; // @synthesize maxDepth;
@property(copy) NSString *error; // @synthesize error;
- (void).cxx_destruct;
- (_Bool)writeNumber:(id)arg1;
- (_Bool)writeString:(id)arg1;
- (_Bool)writeValue:(id)arg1;
- (_Bool)writeBool:(_Bool)arg1;
- (_Bool)writeNull;
- (_Bool)writeArrayClose;
- (_Bool)writeArrayOpen;
- (_Bool)writeObjectClose;
- (_Bool)writeObjectOpen;
- (_Bool)writeArray:(id)arg1;
- (_Bool)writeObject:(id)arg1;
- (void)appendBytes:(const void *)arg1 length:(unsigned long long)arg2;
- (id)init;

@end

