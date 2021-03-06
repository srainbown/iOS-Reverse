//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UITableView.h"

#import "UITableViewDataSource.h"
#import "UITableViewDelegate.h"

@class NSMutableArray, NSString;

@interface SortSingerView : UITableView <UITableViewDelegate, UITableViewDataSource>
{
    NSMutableArray *sectionArray;
    NSMutableArray *_rawList;
    NSString *nameStr;
    id <SortSingerDeleagte> SortSingerdelegate;
}

@property(nonatomic) id <SortSingerDeleagte> SortSingerdelegate; // @synthesize SortSingerdelegate;
@property(retain, nonatomic) NSMutableArray *sectionArray; // @synthesize sectionArray;
- (void)parseSingerSongList:(id)arg1;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)sectionIndexTitlesForTableView:(id)arg1;
- (int)tableView:(id)arg1 sectionForSectionIndexTitle:(id)arg2 atIndex:(int)arg3;
- (float)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (struct CGRect)getLabRect;
- (struct CGRect)getImageRect;
- (int)tableView:(id)arg1 numberOfRowsInSection:(int)arg2;
- (id)tableView:(id)arg1 titleForHeaderInSection:(int)arg2;
- (int)numberOfSectionsInTableView:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1 withRawList:(id)arg2;
- (void)dealloc;

@end

