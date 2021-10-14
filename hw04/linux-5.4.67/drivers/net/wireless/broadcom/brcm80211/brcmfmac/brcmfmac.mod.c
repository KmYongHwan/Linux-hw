#include <linux/build-salt.h>
#include <linux/module.h>
#include <linux/vermagic.h>
#include <linux/compiler.h>

BUILD_SALT;

MODULE_INFO(vermagic, VERMAGIC_STRING);
MODULE_INFO(name, KBUILD_MODNAME);

__visible struct module __this_module
__section(.gnu.linkonce.this_module) = {
	.name = KBUILD_MODNAME,
	.init = init_module,
#ifdef CONFIG_MODULE_UNLOAD
	.exit = cleanup_module,
#endif
	.arch = MODULE_ARCH_INIT,
};

MODULE_INFO(intree, "Y");

#ifdef CONFIG_RETPOLINE
MODULE_INFO(retpoline, "Y");
#endif

static const struct modversion_info ____versions[]
__used __section(__versions) = {
	{ 0x7459220b, "module_layout" },
	{ 0xea4c5e82, "register_netdevice" },
	{ 0x3528921c, "sdio_writeb" },
	{ 0xb2dcc92a, "sdio_readb" },
	{ 0x2d3385d3, "system_wq" },
	{ 0x7c4509ba, "skb_queue_head" },
	{ 0xd6217d91, "brcmu_d11_attach" },
	{ 0xedec5990, "kmalloc_caches" },
	{ 0xaf45d87b, "pci_write_config_dword" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0x50877b9, "dmi_first_match" },
	{ 0xc4f0da12, "ktime_get_with_offset" },
	{ 0xf9a482f9, "msleep" },
	{ 0xf888ca21, "sg_init_table" },
	{ 0x1ed8b599, "__x86_indirect_thunk_r8" },
	{ 0x93e6e765, "wiphy_free" },
	{ 0xdaddbd5a, "trace_handle_return" },
	{ 0x7410aba2, "strreplace" },
	{ 0x25cfb8d4, "cfg80211_connect_done" },
	{ 0x349cba85, "strchr" },
	{ 0xeed57dfe, "param_ops_int" },
	{ 0x754d539c, "strlen" },
	{ 0x919dade8, "device_release_driver" },
	{ 0xea124bd1, "gcd" },
	{ 0x27bbf221, "disable_irq_nosync" },
	{ 0x9c64fbd, "ieee80211_frequency_to_channel" },
	{ 0xdc628a0b, "cfg80211_inform_bss_data" },
	{ 0xf68285c0, "register_inetaddr_notifier" },
	{ 0x66984dba, "send_sig" },
	{ 0xf5596d89, "cfg80211_get_p2p_attr" },
	{ 0x79aa04a2, "get_random_bytes" },
	{ 0x37110088, "remove_wait_queue" },
	{ 0x445a81ce, "boot_cpu_data" },
	{ 0xc8bcbbf3, "sdio_enable_func" },
	{ 0x8658a66c, "pci_disable_device" },
	{ 0xc7a4fbed, "rtnl_lock" },
	{ 0x8d4fe35a, "cfg80211_report_wowlan_wakeup" },
	{ 0x1535a4f3, "sdio_claim_irq" },
	{ 0xc373a5d1, "no_llseek" },
	{ 0xc97dbb66, "sdio_retune_release" },
	{ 0x2f444b25, "brcmu_pkt_buf_get_skb" },
	{ 0x97e005d1, "netif_carrier_on" },
	{ 0xb3635b01, "_raw_spin_lock_bh" },
	{ 0xc0a3d105, "find_next_bit" },
	{ 0xd36dc10c, "get_random_u32" },
	{ 0x34b60257, "netif_carrier_off" },
	{ 0x56470118, "__warn_printk" },
	{ 0x3c12dfe, "cancel_work_sync" },
	{ 0xa84cce3, "usb_kill_urb" },
	{ 0x837b7b09, "__dynamic_pr_debug" },
	{ 0x60352082, "register_inet6addr_notifier" },
	{ 0x66b4cc41, "kmemdup" },
	{ 0xc29957c3, "__x86_indirect_thunk_rcx" },
	{ 0x75452846, "cfg80211_rx_mgmt" },
	{ 0x9791d2e6, "ieee80211_channel_to_frequency" },
	{ 0x87b8798d, "sg_next" },
	{ 0xc310b981, "strnstr" },
	{ 0xd54709d9, "driver_for_each_device" },
	{ 0x88c30f54, "__dev_kfree_skb_any" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0x5c654db3, "brcmu_pktq_pdeq_tail" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x85df9b6c, "strsep" },
	{ 0x69e61a65, "trace_event_buffer_reserve" },
	{ 0x3580f6ff, "__platform_driver_probe" },
	{ 0x999e8297, "vfree" },
	{ 0xaa768b46, "pm_runtime_allow" },
	{ 0x445ce05b, "dma_free_attrs" },
	{ 0x57f0fd5b, "brcmu_pktq_penq" },
	{ 0xf57dc024, "pci_pme_capable" },
	{ 0xab6c7352, "cfg80211_unregister_wdev" },
	{ 0xe72e7ed4, "brcmu_pktq_mdeq" },
	{ 0xc8ec3594, "debugfs_create_file" },
	{ 0x8e12dcca, "pm_runtime_forbid" },
	{ 0x4629334c, "__preempt_count" },
	{ 0x7a2af7b4, "cpu_number" },
	{ 0xdd64e639, "strscpy" },
	{ 0x97651e6c, "vmemmap_base" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0x2a186953, "bpf_trace_run3" },
	{ 0xbb3d2c11, "pv_ops" },
	{ 0x8db07afd, "kthread_create_on_node" },
	{ 0x15ba50a6, "jiffies" },
	{ 0x1e8b2d0e, "sdio_get_host_pm_caps" },
	{ 0xbc376b57, "skb_unlink" },
	{ 0x25b3797e, "skb_trim" },
	{ 0xe2d5255a, "strcmp" },
	{ 0x3150eaea, "cfg80211_mgmt_tx_status" },
	{ 0x77179d2e, "param_ops_string" },
	{ 0xfd94814e, "complete_all" },
	{ 0xce2840e7, "irq_set_irq_wake" },
	{ 0xd5209ccf, "__netdev_alloc_skb" },
	{ 0x23c20fb9, "netif_rx" },
	{ 0x7fc80ca5, "__pskb_pull_tail" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0xaad8c7d6, "default_wake_function" },
	{ 0x1929636d, "mmc_wait_for_req" },
	{ 0x2fe252cc, "unregister_inet6addr_notifier" },
	{ 0x6de13801, "wait_for_completion" },
	{ 0xa73e6a4b, "pci_set_master" },
	{ 0xf9c0b663, "strlcat" },
	{ 0x762c19a9, "sdio_writel" },
	{ 0x97934ecf, "del_timer_sync" },
	{ 0xbda3d4e9, "trace_define_field" },
	{ 0xec9bcaf3, "cfg80211_vendor_cmd_reply" },
	{ 0x7e526bfa, "__x86_indirect_thunk_r10" },
	{ 0xd8f7539, "brcmu_pktq_pdeq_match" },
	{ 0x6a14014e, "_dev_warn" },
	{ 0xfb578fc5, "memset" },
	{ 0x19b84a22, "netif_rx_ni" },
	{ 0xf10de535, "ioread8" },
	{ 0x4fd745b8, "netif_tx_wake_queue" },
	{ 0x2f89cc53, "bpf_trace_run1" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0xba312d7b, "current_task" },
	{ 0x37befc70, "jiffies_to_msecs" },
	{ 0x5c85af9b, "usb_deregister" },
	{ 0x977f511b, "__mutex_init" },
	{ 0xc5850110, "printk" },
	{ 0x1f1fe509, "kthread_stop" },
	{ 0x449ad0a7, "memcmp" },
	{ 0x5a5a2271, "__cpu_online_mask" },
	{ 0x4c9d28b0, "phys_base" },
	{ 0x262e823a, "wait_for_completion_interruptible" },
	{ 0x566aa37f, "efivar_entry_size" },
	{ 0xa80ea35, "free_netdev" },
	{ 0xc698a562, "wiphy_unregister" },
	{ 0xe7b00dfb, "__x86_indirect_thunk_r13" },
	{ 0xa1c76e0a, "_cond_resched" },
	{ 0x9166fada, "strncpy" },
	{ 0xb104128c, "trace_event_reg" },
	{ 0xd4f82b0b, "register_netdev" },
	{ 0x839e2ef7, "nla_put" },
	{ 0x57ab7815, "mmc_set_data_timeout" },
	{ 0x367b747d, "sdio_readl" },
	{ 0xffc025d1, "cfg80211_del_sta_sinfo" },
	{ 0xc510a792, "ieee80211_get_channel" },
	{ 0x5a921311, "strncmp" },
	{ 0x5792f848, "strlcpy" },
	{ 0xf7f271ce, "dma_direct_map_page" },
	{ 0x593c1bac, "__x86_indirect_thunk_rbx" },
	{ 0x3ef84baf, "dma_alloc_attrs" },
	{ 0x7ee63092, "brcmu_pktq_peek_tail" },
	{ 0x96e96601, "brcmu_pktq_flush" },
	{ 0x9e11dee, "sdio_retune_crc_enable" },
	{ 0x4d1a1157, "skb_push" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0x8c03d20c, "destroy_workqueue" },
	{ 0x714dfe80, "cfg80211_michael_mic_failure" },
	{ 0x1d82acaf, "wiphy_apply_custom_regulatory" },
	{ 0xc38c83b8, "mod_timer" },
	{ 0x24d273d1, "add_timer" },
	{ 0xfda9581f, "prandom_u32" },
	{ 0x92d5838e, "request_threaded_irq" },
	{ 0xb18156be, "skb_pull" },
	{ 0x7d22f0d5, "simple_open" },
	{ 0x852036c1, "request_firmware_nowait" },
	{ 0xc56c77da, "cfg80211_ibss_joined" },
	{ 0x2677f884, "device_wakeup_enable" },
	{ 0x890b3d61, "_dev_err" },
	{ 0xce24f1a4, "perf_trace_run_bpf_submit" },
	{ 0x1d0b5393, "pci_enable_msi" },
	{ 0xad5f0017, "perf_trace_buf_alloc" },
	{ 0xfe487975, "init_wait_entry" },
	{ 0x2d1ff8e1, "sdio_readsb" },
	{ 0xec6dbfd3, "sdio_unregister_driver" },
	{ 0x3a2f6702, "sg_alloc_table" },
	{ 0x892d752a, "sdio_f0_writeb" },
	{ 0x3ca22690, "sdio_set_host_pm_flags" },
	{ 0x8ccfcf9, "cfg80211_check_combinations" },
	{ 0x7cd8d75e, "page_offset_base" },
	{ 0x9ab0ed7c, "skb_queue_tail" },
	{ 0x568ff55a, "dma_direct_unmap_page" },
	{ 0x9f984513, "strrchr" },
	{ 0x3aa02c8, "usb_submit_urb" },
	{ 0x40a9b349, "vzalloc" },
	{ 0xb601be4c, "__x86_indirect_thunk_rdx" },
	{ 0x94e454b7, "cfg80211_roamed" },
	{ 0xd6cfed90, "cfg80211_put_bss" },
	{ 0x93a219c, "ioremap_nocache" },
	{ 0xfe029963, "unregister_inetaddr_notifier" },
	{ 0xa916b694, "strnlen" },
	{ 0x12a38747, "usleep_range" },
	{ 0xae121dce, "__cfg80211_alloc_reply_skb" },
	{ 0x1b098acb, "wiphy_register" },
	{ 0x93abe7cc, "trace_event_ignore_this_pid" },
	{ 0x862a8b46, "cfg80211_crit_proto_stopped" },
	{ 0x49c41a57, "_raw_spin_unlock_bh" },
	{ 0x7c3c7d83, "sdio_release_irq" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x9cb986f2, "vmalloc_base" },
	{ 0xaabfe1b2, "cfg80211_classify8021d" },
	{ 0xe909e0e4, "efivar_entry_get" },
	{ 0x8ddd8aad, "schedule_timeout" },
	{ 0x1000e51, "schedule" },
	{ 0xb8b9f817, "kmalloc_order_trace" },
	{ 0x848d372e, "iowrite8" },
	{ 0x11aa2f15, "kfree_skb" },
	{ 0xa0e729e8, "cfg80211_ready_on_channel" },
	{ 0xb9e7429c, "memcpy_toio" },
	{ 0x86f7f0be, "wiphy_new_nm" },
	{ 0x6fe86ad9, "alloc_netdev_mqs" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xe3e53082, "pci_read_config_dword" },
	{ 0x57c0cb89, "eth_type_trans" },
	{ 0xdf256037, "kstrtou8_from_user" },
	{ 0xf2869358, "sdio_f0_readb" },
	{ 0xc410e147, "trace_event_buffer_commit" },
	{ 0xb01c5e76, "dev_driver_string" },
	{ 0xc0af0f07, "wake_up_process" },
	{ 0x32558580, "pskb_expand_head" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xcbd4898c, "fortify_panic" },
	{ 0x5aae2095, "pci_unregister_driver" },
	{ 0xbc0907b0, "ether_setup" },
	{ 0x68828cc7, "cfg80211_disconnected" },
	{ 0xa17c0ccf, "brcmu_dotrev_str" },
	{ 0x9a3e4bed, "kmem_cache_alloc_trace" },
	{ 0xdbf17652, "_raw_spin_lock" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0x5f80123f, "unregister_netdevice_queue" },
	{ 0x9ea53d7f, "vsnprintf" },
	{ 0x4a23b531, "cfg80211_new_sta" },
	{ 0x3eeb2322, "__wake_up" },
	{ 0x6e6709fd, "event_triggers_call" },
	{ 0xb3f7646e, "kthread_should_stop" },
	{ 0xa8f6bf5c, "sdio_memcpy_toio" },
	{ 0x8c26d495, "prepare_to_wait_event" },
	{ 0x3a48c0e4, "bpf_trace_run2" },
	{ 0x462c1e27, "brcmu_pktq_penq_head" },
	{ 0x33b8a927, "brcmu_pktq_init" },
	{ 0x6a86bc1, "iowrite16" },
	{ 0x4afb2238, "add_wait_queue" },
	{ 0xfcec0987, "enable_irq" },
	{ 0x37a0cba, "kfree" },
	{ 0x69acdf38, "memcpy" },
	{ 0xa42a5626, "trace_event_raw_init" },
	{ 0x6df1aaf1, "kernel_sigaction" },
	{ 0x527e1bd8, "pci_disable_msi" },
	{ 0xedc03953, "iounmap" },
	{ 0x7d628444, "memcpy_fromio" },
	{ 0x9dba8f45, "__pci_register_driver" },
	{ 0x53569707, "this_cpu_off" },
	{ 0x96848186, "scnprintf" },
	{ 0x9ce89892, "usb_register_driver" },
	{ 0x71deb539, "request_firmware" },
	{ 0xc5534d64, "ioread16" },
	{ 0xb352177e, "find_first_bit" },
	{ 0x92540fbf, "finish_wait" },
	{ 0xf4733f31, "skb_dequeue" },
	{ 0x8a9e05e7, "cfg80211_remain_on_channel_expired" },
	{ 0xc4e35547, "unregister_netdev" },
	{ 0x7f5b4fe4, "sg_free_table" },
	{ 0x527fb529, "trace_raw_output_prep" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0x29361773, "complete" },
	{ 0x656e4a6e, "snprintf" },
	{ 0x8888b156, "trace_seq_printf" },
	{ 0xfe8830e8, "sdio_register_driver" },
	{ 0x15314fce, "consume_skb" },
	{ 0xd79398b2, "sdio_memcpy_fromio" },
	{ 0xb3eaf15f, "cfg80211_sched_scan_stopped" },
	{ 0x75faced3, "sdio_claim_host" },
	{ 0xf2aa42ba, "platform_driver_unregister" },
	{ 0x772408b5, "firmware_request_nowarn" },
	{ 0x7f02188f, "__msecs_to_jiffies" },
	{ 0xc223db15, "cfg80211_scan_done" },
	{ 0x46ee5225, "sdio_retune_crc_disable" },
	{ 0x4a453f53, "iowrite32" },
	{ 0x9203ec16, "brcmu_pkt_buf_free_skb" },
	{ 0x9c160d9e, "skb_put" },
	{ 0x7ed451da, "pci_enable_device" },
	{ 0x4d1ff60a, "wait_for_completion_timeout" },
	{ 0x227e35c3, "usb_free_urb" },
	{ 0xdf9208c0, "alloc_workqueue" },
	{ 0x9caa394e, "is_acpi_device_node" },
	{ 0x7d477f96, "sdio_set_block_size" },
	{ 0xede283d, "release_firmware" },
	{ 0x6e720ff2, "rtnl_unlock" },
	{ 0xa637b975, "dma_ops" },
	{ 0xe484e35f, "ioread32" },
	{ 0x34f20df7, "device_set_wakeup_enable" },
	{ 0x474623ba, "sdio_disable_func" },
	{ 0x334097dc, "usb_alloc_urb" },
	{ 0xc1514a3b, "free_irq" },
	{ 0xb3dcfb60, "sdio_release_host" },
	{ 0xe914e41e, "strcpy" },
	{ 0xf3503b90, "sdio_retune_hold_now" },
	{ 0xf7f84d14, "cfg80211_sched_scan_results" },
	{ 0x1b940d8f, "brcmu_pktq_mlen" },
	{ 0x81e6b37f, "dmi_get_system_info" },
};

MODULE_INFO(depends, "brcmutil,cfg80211");

MODULE_ALIAS("sdio:c*v02D0dA887*");
MODULE_ALIAS("sdio:c*v02D0d4324*");
MODULE_ALIAS("sdio:c*v02D0d4329*");
MODULE_ALIAS("sdio:c*v02D0d4330*");
MODULE_ALIAS("sdio:c*v02D0d4334*");
MODULE_ALIAS("sdio:c*v02D0dA94C*");
MODULE_ALIAS("sdio:c*v02D0dA94D*");
MODULE_ALIAS("sdio:c*v02D0dA962*");
MODULE_ALIAS("sdio:c*v02D0dA9A4*");
MODULE_ALIAS("sdio:c*v02D0d4335*");
MODULE_ALIAS("sdio:c*v02D0d4339*");
MODULE_ALIAS("sdio:c*v02D0dA9A6*");
MODULE_ALIAS("sdio:c*v02D0d4345*");
MODULE_ALIAS("sdio:c*v02D0dA9BF*");
MODULE_ALIAS("sdio:c*v02D0d4354*");
MODULE_ALIAS("sdio:c*v02D0d4356*");
MODULE_ALIAS("sdio:c*v02D0d4373*");
MODULE_ALIAS("sdio:c*v02D0dA804*");
MODULE_ALIAS("pci:v000014E4d000043A3sv*sd*bc02sc80i*");
MODULE_ALIAS("pci:v000014E4d00004355sv000014E4sd00004355bc02sc80i*");
MODULE_ALIAS("pci:v000014E4d00004354sv*sd*bc02sc80i*");
MODULE_ALIAS("pci:v000014E4d000043ECsv*sd*bc02sc80i*");
MODULE_ALIAS("pci:v000014E4d000043D3sv*sd*bc02sc80i*");
MODULE_ALIAS("pci:v000014E4d000043D9sv*sd*bc02sc80i*");
MODULE_ALIAS("pci:v000014E4d000043E9sv*sd*bc02sc80i*");
MODULE_ALIAS("pci:v000014E4d000043EFsv*sd*bc02sc80i*");
MODULE_ALIAS("pci:v000014E4d000043BAsv*sd*bc02sc80i*");
MODULE_ALIAS("pci:v000014E4d000043BBsv*sd*bc02sc80i*");
MODULE_ALIAS("pci:v000014E4d000043BCsv*sd*bc02sc80i*");
MODULE_ALIAS("pci:v000014E4d0000AA52sv*sd*bc02sc80i*");
MODULE_ALIAS("pci:v000014E4d000043CAsv*sd*bc02sc80i*");
MODULE_ALIAS("pci:v000014E4d000043CBsv*sd*bc02sc80i*");
MODULE_ALIAS("pci:v000014E4d000043CCsv*sd*bc02sc80i*");
MODULE_ALIAS("pci:v000014E4d00004365sv000014E4sd00004365bc02sc80i*");
MODULE_ALIAS("pci:v000014E4d000043C3sv*sd*bc02sc80i*");
MODULE_ALIAS("pci:v000014E4d000043C4sv*sd*bc02sc80i*");
MODULE_ALIAS("pci:v000014E4d000043C5sv*sd*bc02sc80i*");
MODULE_ALIAS("pci:v000014E4d0000440Dsv*sd*bc02sc80i*");
MODULE_ALIAS("usb:v0A5CpBD1Ed*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0A5CpBD17d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0A5CpBD1Fd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0A5CpBD27d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v13B1p0039d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v04B4pBD29d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v043Ep3101d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0A5Cp0BDCd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v04B4p0BDCd*dc*dsc*dp*ic*isc*ip*in*");

MODULE_INFO(srcversion, "6D5867F7340128EC2ECB124");
