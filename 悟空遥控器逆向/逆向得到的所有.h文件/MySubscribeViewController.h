//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "WKBaseSubViewController.h"

#import "UITableViewDataSource.h"
#import "UITableViewDelegate.h"

@class NSMutableArray, NSString, UITableView, WKNoResultView;

@interface MySubscribeViewController : WKBaseSubViewController <UITableViewDelegate, UITableViewDataSource>
{
    UITableView *_mySubscribeTableView;
    NSMutableArray *_datasource;
    NSString *_nextPage;
    WKNoResultView *_noResultView;
    WKNoResultView *_networkFaildView;
}

@property(retain, nonatomic) WKNoResultView *networkFaildView; // @synthesize networkFaildView=_networkFaildView;
@property(retain, nonatomic) WKNoResultView *noResultView; // @synthesize noResultView=_noResultView;
@property(copy, nonatomic) NSString *nextPage; // @synthesize nextPage=_nextPage;
@property(retain, nonatomic) NSMutableArray *datasource; // @synthesize datasource=_datasource;
@property(nonatomic) __weak UITableView *mySubscribeTableView; // @synthesize mySubscribeTableView=_mySubscribeTableView;
- (void).cxx_destruct;
- (void)refreshNodataView;
- (void)tableView:(id)arg1 commitEditingStyle:(long long)arg2 forRowAtIndexPath:(id)arg3;
- (id)tableView:(id)arg1 titleForDeleteConfirmationButtonForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 editingStyleForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (void)getDataFromNet:(id)arg1 isFirstLoad:(_Bool)arg2;
- (void)viewDidLoad;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

