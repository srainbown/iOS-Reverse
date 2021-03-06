//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MSViewController.h"

#import "UITableViewDataSource.h"
#import "UITableViewDelegate.h"

@class MSNavigationViewController, UITableView;

@interface TLJasCtrlViewController : MSViewController <UITableViewDataSource, UITableViewDelegate>
{
    MSNavigationViewController *_navMain;
    MSNavigationViewController *_navAbout;
    MSNavigationViewController *_navFunction;
    MSNavigationViewController *_navConnected;
    UITableView *_selTableView;
}

+ (id)sharedTLJasCtrlViewController;
@property(retain, nonatomic) MSNavigationViewController *navConnected; // @synthesize navConnected=_navConnected;
@property(retain, nonatomic) MSNavigationViewController *navFunction; // @synthesize navFunction=_navFunction;
@property(retain, nonatomic) MSNavigationViewController *navAbout; // @synthesize navAbout=_navAbout;
@property(retain, nonatomic) MSNavigationViewController *navMain; // @synthesize navMain=_navMain;
- (void)didReceiveMemoryWarning;
- (float)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (int)numberOfSectionsInTableView:(id)arg1;
- (void)btnClick:(id)arg1;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (int)tableView:(id)arg1 numberOfRowsInSection:(int)arg2;
- (void)viewDidLoad;
- (id)init;
- (void)dealloc;

@end

