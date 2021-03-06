//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UITableView.h"

#import "MNMBottomPullToRefreshManagerClient.h"
#import "UITableViewDataSource.h"
#import "UITableViewDelegate.h"

@class MNMBottomPullToRefreshManager;

@interface PullToRefreshTableView : UITableView <UITableViewDelegate, UITableViewDataSource, MNMBottomPullToRefreshManagerClient>
{
    int rowCount;
    MNMBottomPullToRefreshManager *_pullToRefreshManager;
}

@property(retain, nonatomic) MNMBottomPullToRefreshManager *pullToRefreshManager; // @synthesize pullToRefreshManager=_pullToRefreshManager;
- (void)relocatePullToRefreshView;
- (void)bottomPullToRefreshTriggered:(id)arg1;
- (void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(BOOL)arg2;
- (void)scrollViewDidScroll:(id)arg1;
- (void)loadTable;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (int)tableView:(id)arg1 numberOfRowsInSection:(int)arg2;
- (int)numberOfSectionsInTableView:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)dealloc;

@end

