//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface PCMData : NSObject
{
    char *buffer;
    int size;
}

@property int size; // @synthesize size;
@property char *buffer; // @synthesize buffer;
- (void)dealloc;
- (id)init:(char *)arg1 theSize:(int)arg2;

@end

