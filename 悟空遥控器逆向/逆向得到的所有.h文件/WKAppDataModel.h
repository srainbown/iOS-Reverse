//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class WKAppDetailModel, WKAppShareInfoModel;

@interface WKAppDataModel : NSObject
{
    WKAppDetailModel *_detail;
    WKAppShareInfoModel *_shareinfo;
}

@property(retain, nonatomic) WKAppShareInfoModel *shareinfo; // @synthesize shareinfo=_shareinfo;
@property(retain, nonatomic) WKAppDetailModel *detail; // @synthesize detail=_detail;
- (void).cxx_destruct;

@end

