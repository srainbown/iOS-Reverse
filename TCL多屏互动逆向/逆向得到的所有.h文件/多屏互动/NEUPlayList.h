//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableArray;

@interface NEUPlayList : NSObject
{
    NSMutableArray *_playListArray;
    int _nCurPlayIndex;
}

+ (id)sharedPlayList;
- (void)dealloc;
- (void)removeItemAtIndex:(int)arg1;
- (BOOL)setCurPlayIndexTo:(int)arg1;
- (void)setNewPlayListWithDic:(id)arg1;
- (void)setNewPlayListWithArray:(id)arg1;
- (void)clearPlayList;
- (id)moveToItemAtIndex:(int)arg1;
- (id)getItemAtIndex:(int)arg1;
- (id)getCurItem;
- (id)moveToPreviousItem;
- (id)moveToNextItem;
- (id)previousItem;
- (id)nextItem;
- (BOOL)isPlayListEmpty;
- (BOOL)isHavePreviousItem;
- (BOOL)isHaveNextItem;
- (int)getPlayListItemCount;
- (int)getCurPlayIndex;
- (id)getAllItems;
- (void)restore;
- (id)init;

@end

