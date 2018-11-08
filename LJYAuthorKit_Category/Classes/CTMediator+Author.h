//
//  CTMediator+Author.h
//  AFNetworking
//
//  Created by chengrui ruan on 2018/11/8.
//

#import <UIKit/UIKit.h>
#import <CTMediator/CTMediator.h>
#import <LJYAPIsKit/APIRequest.h>

@interface CTMediator (Author)

- (UIViewController*)authorDetailViewController;

- (NSDictionary*)authorReformerWithOriginData:(NSDictionary*)data;

- (NSDictionary *)authorReformer;

- (APIRequest *)authorAPIRequest;

@end
