//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "WKBaseSubViewController.h"

#import "UITableViewDataSource.h"
#import "UITableViewDelegate.h"

@class CAGradientLayer, NSLayoutConstraint, NSString, UIButton, UIImageView, UILabel, UITableView, UITableViewCell, UIView, WKUserModel;

@interface MyCenterViewController : WKBaseSubViewController <UITableViewDelegate, UITableViewDataSource>
{
    UITableView *_tvMain;
    UITableViewCell *_headCell;
    UIImageView *_headImagV;
    UILabel *_nickNameLbl;
    UILabel *_addrLbl;
    UITableViewCell *_logoutCell;
    UIButton *_logoutBtn;
    UIImageView *_sexImageV;
    NSLayoutConstraint *_headIVWidth;
    WKUserModel *_user;
    CAGradientLayer *_gradientLayer;
    UIView *_shadeView;
    NSLayoutConstraint *_nickNameLblCenterX;
    NSLayoutConstraint *_addrLblCenterX;
}

@property(nonatomic) __weak NSLayoutConstraint *addrLblCenterX; // @synthesize addrLblCenterX=_addrLblCenterX;
@property(nonatomic) __weak NSLayoutConstraint *nickNameLblCenterX; // @synthesize nickNameLblCenterX=_nickNameLblCenterX;
@property(nonatomic) __weak UIView *shadeView; // @synthesize shadeView=_shadeView;
@property(retain, nonatomic) CAGradientLayer *gradientLayer; // @synthesize gradientLayer=_gradientLayer;
@property(retain, nonatomic) WKUserModel *user; // @synthesize user=_user;
@property(nonatomic) __weak NSLayoutConstraint *headIVWidth; // @synthesize headIVWidth=_headIVWidth;
@property(nonatomic) __weak UIImageView *sexImageV; // @synthesize sexImageV=_sexImageV;
@property(nonatomic) __weak UIButton *logoutBtn; // @synthesize logoutBtn=_logoutBtn;
@property(retain, nonatomic) UITableViewCell *logoutCell; // @synthesize logoutCell=_logoutCell;
@property(nonatomic) __weak UILabel *addrLbl; // @synthesize addrLbl=_addrLbl;
@property(nonatomic) __weak UILabel *nickNameLbl; // @synthesize nickNameLbl=_nickNameLbl;
@property(nonatomic) __weak UIImageView *headImagV; // @synthesize headImagV=_headImagV;
@property(retain, nonatomic) UITableViewCell *headCell; // @synthesize headCell=_headCell;
@property(nonatomic) __weak UITableView *tvMain; // @synthesize tvMain=_tvMain;
- (void).cxx_destruct;
- (void)alertView:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (void)logout;
- (void)didPressedLogoutBtn:(id)arg1;
- (void)dismissView;
- (long long)preferredStatusBarStyle;
- (void)checkLogonStatus;
- (void)addGradientView;
- (void)addTopView;
- (void)buildUI;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

