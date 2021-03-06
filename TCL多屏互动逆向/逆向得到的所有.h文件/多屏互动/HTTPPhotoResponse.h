//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "HTTPResponse.h"

@class ALAssetRepresentation, ALAssetsLibrary, NSConditionLock, NSData;

@interface HTTPPhotoResponse : NSObject <HTTPResponse>
{
    ALAssetRepresentation *_assetRep;
    ALAssetsLibrary *assetsLibrary;
    NSConditionLock *albumReadLock;
    unsigned int offset;
    NSData *data;
}

@property(retain, nonatomic) ALAssetRepresentation *assetRep; // @synthesize assetRep=_assetRep;
- (BOOL)isDone;
- (id)readDataOfLength:(unsigned int)arg1;
- (void)setOffset:(unsigned long long)arg1;
- (unsigned long long)offset;
- (unsigned long long)contentLength;
- (void)dealloc;
- (id)scaleToSize:(id)arg1 size:(struct CGSize)arg2;
- (id)initWithAssetURL:(id)arg1;

@end

