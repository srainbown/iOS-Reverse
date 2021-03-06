//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "WKBaseSubFirstViewController.h"

#import "UITableViewDataSource.h"
#import "UITableViewDelegate.h"

@class NSArray, NSMutableArray, NSString, UITableView;

@interface AppCenterBoutiqueViewController : WKBaseSubFirstViewController <UITableViewDelegate, UITableViewDataSource>
{
    UITableView *_appcenterTableView;
    NSMutableArray *_datasourceArray;
    NSArray *_datasourceArrayFromServer;
    NSArray *_essentialArray;
    NSArray *_allInstalledApps;
    NSArray *_waitingInstallApps;
    NSArray *_waitingDownLoadApps;
}

@property(retain, nonatomic) NSArray *waitingDownLoadApps; // @synthesize waitingDownLoadApps=_waitingDownLoadApps;
@property(retain, nonatomic) NSArray *waitingInstallApps; // @synthesize waitingInstallApps=_waitingInstallApps;
@property(retain, nonatomic) NSArray *allInstalledApps; // @synthesize allInstalledApps=_allInstalledApps;
@property(retain, nonatomic) NSArray *essentialArray; // @synthesize essentialArray=_essentialArray;
@property(retain, nonatomic) NSArray *datasourceArrayFromServer; // @synthesize datasourceArrayFromServer=_datasourceArrayFromServer;
@property(retain, nonatomic) NSMutableArray *datasourceArray; // @synthesize datasourceArray=_datasourceArray;
@property(nonatomic) __weak UITableView *appcenterTableView; // @synthesize appcenterTableView=_appcenterTableView;
- (void).cxx_destruct;
- (void)dealloc;
- (void)mergewaitingDownloadData;
- (void)mergewaitingInstallData;
- (void)mergeInstalledData;
- (void)mergeData;
- (void)closeNewUserGuide:(id)arg1;
- (void)showNewUserGuide;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)registerCell;
- (void)renderAPPcenterTableView;
- (void)deepCopyDatasource;
- (void)getNewGuideData;
- (void)getDataFromNet:(_Bool)arg1;
- (void)waitInstallAppListArray:(id)arg1;
- (void)waitDownloadAppListArray:(id)arg1;
- (void)allInstallAppListArray:(id)arg1;
- (void)notifyAppChange:(id)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

