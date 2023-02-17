// WARNING: Please don't edit this file. It was generated by C++/WinRT v2.0.210806.1

#pragma once
#ifndef WINRT_Windows_Devices_PointOfService_Provider_2_H
#define WINRT_Windows_Devices_PointOfService_Provider_2_H
#include "winrt/impl/Windows.Foundation.1.h"
#include "winrt/impl/Windows.Devices.PointOfService.Provider.1.h"
WINRT_EXPORT namespace winrt::Windows::Devices::PointOfService::Provider
{
    struct __declspec(empty_bases) BarcodeScannerDisableScannerRequest : winrt::Windows::Devices::PointOfService::Provider::IBarcodeScannerDisableScannerRequest,
        impl::require<BarcodeScannerDisableScannerRequest, winrt::Windows::Devices::PointOfService::Provider::IBarcodeScannerDisableScannerRequest2>
    {
        BarcodeScannerDisableScannerRequest(std::nullptr_t) noexcept {}
        BarcodeScannerDisableScannerRequest(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::Devices::PointOfService::Provider::IBarcodeScannerDisableScannerRequest(ptr, take_ownership_from_abi) {}
        using winrt::Windows::Devices::PointOfService::Provider::IBarcodeScannerDisableScannerRequest::ReportFailedAsync;
        using impl::consume_t<BarcodeScannerDisableScannerRequest, winrt::Windows::Devices::PointOfService::Provider::IBarcodeScannerDisableScannerRequest2>::ReportFailedAsync;
    };
    struct __declspec(empty_bases) BarcodeScannerDisableScannerRequestEventArgs : winrt::Windows::Devices::PointOfService::Provider::IBarcodeScannerDisableScannerRequestEventArgs
    {
        BarcodeScannerDisableScannerRequestEventArgs(std::nullptr_t) noexcept {}
        BarcodeScannerDisableScannerRequestEventArgs(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::Devices::PointOfService::Provider::IBarcodeScannerDisableScannerRequestEventArgs(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) BarcodeScannerEnableScannerRequest : winrt::Windows::Devices::PointOfService::Provider::IBarcodeScannerEnableScannerRequest,
        impl::require<BarcodeScannerEnableScannerRequest, winrt::Windows::Devices::PointOfService::Provider::IBarcodeScannerEnableScannerRequest2>
    {
        BarcodeScannerEnableScannerRequest(std::nullptr_t) noexcept {}
        BarcodeScannerEnableScannerRequest(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::Devices::PointOfService::Provider::IBarcodeScannerEnableScannerRequest(ptr, take_ownership_from_abi) {}
        using winrt::Windows::Devices::PointOfService::Provider::IBarcodeScannerEnableScannerRequest::ReportFailedAsync;
        using impl::consume_t<BarcodeScannerEnableScannerRequest, winrt::Windows::Devices::PointOfService::Provider::IBarcodeScannerEnableScannerRequest2>::ReportFailedAsync;
    };
    struct __declspec(empty_bases) BarcodeScannerEnableScannerRequestEventArgs : winrt::Windows::Devices::PointOfService::Provider::IBarcodeScannerEnableScannerRequestEventArgs
    {
        BarcodeScannerEnableScannerRequestEventArgs(std::nullptr_t) noexcept {}
        BarcodeScannerEnableScannerRequestEventArgs(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::Devices::PointOfService::Provider::IBarcodeScannerEnableScannerRequestEventArgs(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) BarcodeScannerFrameReader : winrt::Windows::Devices::PointOfService::Provider::IBarcodeScannerFrameReader,
        impl::require<BarcodeScannerFrameReader, winrt::Windows::Foundation::IClosable>
    {
        BarcodeScannerFrameReader(std::nullptr_t) noexcept {}
        BarcodeScannerFrameReader(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::Devices::PointOfService::Provider::IBarcodeScannerFrameReader(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) BarcodeScannerFrameReaderFrameArrivedEventArgs : winrt::Windows::Devices::PointOfService::Provider::IBarcodeScannerFrameReaderFrameArrivedEventArgs
    {
        BarcodeScannerFrameReaderFrameArrivedEventArgs(std::nullptr_t) noexcept {}
        BarcodeScannerFrameReaderFrameArrivedEventArgs(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::Devices::PointOfService::Provider::IBarcodeScannerFrameReaderFrameArrivedEventArgs(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) BarcodeScannerGetSymbologyAttributesRequest : winrt::Windows::Devices::PointOfService::Provider::IBarcodeScannerGetSymbologyAttributesRequest,
        impl::require<BarcodeScannerGetSymbologyAttributesRequest, winrt::Windows::Devices::PointOfService::Provider::IBarcodeScannerGetSymbologyAttributesRequest2>
    {
        BarcodeScannerGetSymbologyAttributesRequest(std::nullptr_t) noexcept {}
        BarcodeScannerGetSymbologyAttributesRequest(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::Devices::PointOfService::Provider::IBarcodeScannerGetSymbologyAttributesRequest(ptr, take_ownership_from_abi) {}
        using winrt::Windows::Devices::PointOfService::Provider::IBarcodeScannerGetSymbologyAttributesRequest::ReportFailedAsync;
        using impl::consume_t<BarcodeScannerGetSymbologyAttributesRequest, winrt::Windows::Devices::PointOfService::Provider::IBarcodeScannerGetSymbologyAttributesRequest2>::ReportFailedAsync;
    };
    struct __declspec(empty_bases) BarcodeScannerGetSymbologyAttributesRequestEventArgs : winrt::Windows::Devices::PointOfService::Provider::IBarcodeScannerGetSymbologyAttributesRequestEventArgs
    {
        BarcodeScannerGetSymbologyAttributesRequestEventArgs(std::nullptr_t) noexcept {}
        BarcodeScannerGetSymbologyAttributesRequestEventArgs(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::Devices::PointOfService::Provider::IBarcodeScannerGetSymbologyAttributesRequestEventArgs(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) BarcodeScannerHideVideoPreviewRequest : winrt::Windows::Devices::PointOfService::Provider::IBarcodeScannerHideVideoPreviewRequest,
        impl::require<BarcodeScannerHideVideoPreviewRequest, winrt::Windows::Devices::PointOfService::Provider::IBarcodeScannerHideVideoPreviewRequest2>
    {
        BarcodeScannerHideVideoPreviewRequest(std::nullptr_t) noexcept {}
        BarcodeScannerHideVideoPreviewRequest(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::Devices::PointOfService::Provider::IBarcodeScannerHideVideoPreviewRequest(ptr, take_ownership_from_abi) {}
        using winrt::Windows::Devices::PointOfService::Provider::IBarcodeScannerHideVideoPreviewRequest::ReportFailedAsync;
        using impl::consume_t<BarcodeScannerHideVideoPreviewRequest, winrt::Windows::Devices::PointOfService::Provider::IBarcodeScannerHideVideoPreviewRequest2>::ReportFailedAsync;
    };
    struct __declspec(empty_bases) BarcodeScannerHideVideoPreviewRequestEventArgs : winrt::Windows::Devices::PointOfService::Provider::IBarcodeScannerHideVideoPreviewRequestEventArgs
    {
        BarcodeScannerHideVideoPreviewRequestEventArgs(std::nullptr_t) noexcept {}
        BarcodeScannerHideVideoPreviewRequestEventArgs(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::Devices::PointOfService::Provider::IBarcodeScannerHideVideoPreviewRequestEventArgs(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) BarcodeScannerProviderConnection : winrt::Windows::Devices::PointOfService::Provider::IBarcodeScannerProviderConnection,
        impl::require<BarcodeScannerProviderConnection, winrt::Windows::Devices::PointOfService::Provider::IBarcodeScannerProviderConnection2, winrt::Windows::Foundation::IClosable>
    {
        BarcodeScannerProviderConnection(std::nullptr_t) noexcept {}
        BarcodeScannerProviderConnection(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::Devices::PointOfService::Provider::IBarcodeScannerProviderConnection(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) BarcodeScannerProviderTriggerDetails : winrt::Windows::Devices::PointOfService::Provider::IBarcodeScannerProviderTriggerDetails
    {
        BarcodeScannerProviderTriggerDetails(std::nullptr_t) noexcept {}
        BarcodeScannerProviderTriggerDetails(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::Devices::PointOfService::Provider::IBarcodeScannerProviderTriggerDetails(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) BarcodeScannerSetActiveSymbologiesRequest : winrt::Windows::Devices::PointOfService::Provider::IBarcodeScannerSetActiveSymbologiesRequest,
        impl::require<BarcodeScannerSetActiveSymbologiesRequest, winrt::Windows::Devices::PointOfService::Provider::IBarcodeScannerSetActiveSymbologiesRequest2>
    {
        BarcodeScannerSetActiveSymbologiesRequest(std::nullptr_t) noexcept {}
        BarcodeScannerSetActiveSymbologiesRequest(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::Devices::PointOfService::Provider::IBarcodeScannerSetActiveSymbologiesRequest(ptr, take_ownership_from_abi) {}
        using winrt::Windows::Devices::PointOfService::Provider::IBarcodeScannerSetActiveSymbologiesRequest::ReportFailedAsync;
        using impl::consume_t<BarcodeScannerSetActiveSymbologiesRequest, winrt::Windows::Devices::PointOfService::Provider::IBarcodeScannerSetActiveSymbologiesRequest2>::ReportFailedAsync;
    };
    struct __declspec(empty_bases) BarcodeScannerSetActiveSymbologiesRequestEventArgs : winrt::Windows::Devices::PointOfService::Provider::IBarcodeScannerSetActiveSymbologiesRequestEventArgs
    {
        BarcodeScannerSetActiveSymbologiesRequestEventArgs(std::nullptr_t) noexcept {}
        BarcodeScannerSetActiveSymbologiesRequestEventArgs(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::Devices::PointOfService::Provider::IBarcodeScannerSetActiveSymbologiesRequestEventArgs(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) BarcodeScannerSetSymbologyAttributesRequest : winrt::Windows::Devices::PointOfService::Provider::IBarcodeScannerSetSymbologyAttributesRequest,
        impl::require<BarcodeScannerSetSymbologyAttributesRequest, winrt::Windows::Devices::PointOfService::Provider::IBarcodeScannerSetSymbologyAttributesRequest2>
    {
        BarcodeScannerSetSymbologyAttributesRequest(std::nullptr_t) noexcept {}
        BarcodeScannerSetSymbologyAttributesRequest(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::Devices::PointOfService::Provider::IBarcodeScannerSetSymbologyAttributesRequest(ptr, take_ownership_from_abi) {}
        using winrt::Windows::Devices::PointOfService::Provider::IBarcodeScannerSetSymbologyAttributesRequest::ReportFailedAsync;
        using impl::consume_t<BarcodeScannerSetSymbologyAttributesRequest, winrt::Windows::Devices::PointOfService::Provider::IBarcodeScannerSetSymbologyAttributesRequest2>::ReportFailedAsync;
    };
    struct __declspec(empty_bases) BarcodeScannerSetSymbologyAttributesRequestEventArgs : winrt::Windows::Devices::PointOfService::Provider::IBarcodeScannerSetSymbologyAttributesRequestEventArgs
    {
        BarcodeScannerSetSymbologyAttributesRequestEventArgs(std::nullptr_t) noexcept {}
        BarcodeScannerSetSymbologyAttributesRequestEventArgs(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::Devices::PointOfService::Provider::IBarcodeScannerSetSymbologyAttributesRequestEventArgs(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) BarcodeScannerStartSoftwareTriggerRequest : winrt::Windows::Devices::PointOfService::Provider::IBarcodeScannerStartSoftwareTriggerRequest,
        impl::require<BarcodeScannerStartSoftwareTriggerRequest, winrt::Windows::Devices::PointOfService::Provider::IBarcodeScannerStartSoftwareTriggerRequest2>
    {
        BarcodeScannerStartSoftwareTriggerRequest(std::nullptr_t) noexcept {}
        BarcodeScannerStartSoftwareTriggerRequest(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::Devices::PointOfService::Provider::IBarcodeScannerStartSoftwareTriggerRequest(ptr, take_ownership_from_abi) {}
        using winrt::Windows::Devices::PointOfService::Provider::IBarcodeScannerStartSoftwareTriggerRequest::ReportFailedAsync;
        using impl::consume_t<BarcodeScannerStartSoftwareTriggerRequest, winrt::Windows::Devices::PointOfService::Provider::IBarcodeScannerStartSoftwareTriggerRequest2>::ReportFailedAsync;
    };
    struct __declspec(empty_bases) BarcodeScannerStartSoftwareTriggerRequestEventArgs : winrt::Windows::Devices::PointOfService::Provider::IBarcodeScannerStartSoftwareTriggerRequestEventArgs
    {
        BarcodeScannerStartSoftwareTriggerRequestEventArgs(std::nullptr_t) noexcept {}
        BarcodeScannerStartSoftwareTriggerRequestEventArgs(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::Devices::PointOfService::Provider::IBarcodeScannerStartSoftwareTriggerRequestEventArgs(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) BarcodeScannerStopSoftwareTriggerRequest : winrt::Windows::Devices::PointOfService::Provider::IBarcodeScannerStopSoftwareTriggerRequest,
        impl::require<BarcodeScannerStopSoftwareTriggerRequest, winrt::Windows::Devices::PointOfService::Provider::IBarcodeScannerStopSoftwareTriggerRequest2>
    {
        BarcodeScannerStopSoftwareTriggerRequest(std::nullptr_t) noexcept {}
        BarcodeScannerStopSoftwareTriggerRequest(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::Devices::PointOfService::Provider::IBarcodeScannerStopSoftwareTriggerRequest(ptr, take_ownership_from_abi) {}
        using winrt::Windows::Devices::PointOfService::Provider::IBarcodeScannerStopSoftwareTriggerRequest::ReportFailedAsync;
        using impl::consume_t<BarcodeScannerStopSoftwareTriggerRequest, winrt::Windows::Devices::PointOfService::Provider::IBarcodeScannerStopSoftwareTriggerRequest2>::ReportFailedAsync;
    };
    struct __declspec(empty_bases) BarcodeScannerStopSoftwareTriggerRequestEventArgs : winrt::Windows::Devices::PointOfService::Provider::IBarcodeScannerStopSoftwareTriggerRequestEventArgs
    {
        BarcodeScannerStopSoftwareTriggerRequestEventArgs(std::nullptr_t) noexcept {}
        BarcodeScannerStopSoftwareTriggerRequestEventArgs(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::Devices::PointOfService::Provider::IBarcodeScannerStopSoftwareTriggerRequestEventArgs(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) BarcodeScannerVideoFrame : winrt::Windows::Devices::PointOfService::Provider::IBarcodeScannerVideoFrame,
        impl::require<BarcodeScannerVideoFrame, winrt::Windows::Foundation::IClosable>
    {
        BarcodeScannerVideoFrame(std::nullptr_t) noexcept {}
        BarcodeScannerVideoFrame(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::Devices::PointOfService::Provider::IBarcodeScannerVideoFrame(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) BarcodeSymbologyAttributesBuilder : winrt::Windows::Devices::PointOfService::Provider::IBarcodeSymbologyAttributesBuilder
    {
        BarcodeSymbologyAttributesBuilder(std::nullptr_t) noexcept {}
        BarcodeSymbologyAttributesBuilder(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::Devices::PointOfService::Provider::IBarcodeSymbologyAttributesBuilder(ptr, take_ownership_from_abi) {}
        BarcodeSymbologyAttributesBuilder();
    };
}
#endif
