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
	{ 0x4d553332, "ieee80211_rx_napi" },
	{ 0x7c4509ba, "skb_queue_head" },
	{ 0x2d3385d3, "system_wq" },
	{ 0x57d105d4, "ssb_dma_translation" },
	{ 0x9f8e5a9e, "device_remove_file" },
	{ 0xedec5990, "kmalloc_caches" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0xf9a482f9, "msleep" },
	{ 0x1eb75646, "bcma_pmu_spuravoid_pllupdate" },
	{ 0x1ed8b599, "__x86_indirect_thunk_r8" },
	{ 0xeed57dfe, "param_ops_int" },
	{ 0x91eb9b4, "round_jiffies" },
	{ 0xe7fba065, "ieee80211_queue_work" },
	{ 0xb0e3bbfc, "bcma_host_pci_down" },
	{ 0xf189e453, "dma_set_mask" },
	{ 0x445a81ce, "boot_cpu_data" },
	{ 0xb74eabdf, "ieee80211_rts_get" },
	{ 0x17fc86f3, "skb_clone" },
	{ 0x7ef39823, "ieee80211_hdrlen" },
	{ 0xffeedf6a, "delayed_work_timer_fn" },
	{ 0x6d076c20, "ssb_commit_settings" },
	{ 0x22e71afc, "ieee80211_beacon_get_tim" },
	{ 0xdf566a59, "__x86_indirect_thunk_r9" },
	{ 0x56470118, "__warn_printk" },
	{ 0x3c12dfe, "cancel_work_sync" },
	{ 0x68c544c7, "dma_direct_sync_single_for_cpu" },
	{ 0x66b4cc41, "kmemdup" },
	{ 0xc29957c3, "__x86_indirect_thunk_rcx" },
	{ 0xf36cc24f, "ieee80211_unregister_hw" },
	{ 0x9791d2e6, "ieee80211_channel_to_frequency" },
	{ 0x88c30f54, "__dev_kfree_skb_any" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0x9fa7184a, "cancel_delayed_work_sync" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0xcec732a9, "ssb_bus_powerup" },
	{ 0x5b88cd62, "bcma_host_pci_up" },
	{ 0x445ce05b, "dma_free_attrs" },
	{ 0x967a5e95, "wiphy_rfkill_start_polling" },
	{ 0x4629334c, "__preempt_count" },
	{ 0xbeb6359f, "__ieee80211_get_assoc_led_name" },
	{ 0x97651e6c, "vmemmap_base" },
	{ 0xbb3d2c11, "pv_ops" },
	{ 0x9078fc, "dma_set_coherent_mask" },
	{ 0x15ba50a6, "jiffies" },
	{ 0xe2d5255a, "strcmp" },
	{ 0x65ae47d0, "__ssb_driver_register" },
	{ 0x77179d2e, "param_ops_string" },
	{ 0xd5209ccf, "__netdev_alloc_skb" },
	{ 0x6f3c3906, "ieee80211_stop_queue" },
	{ 0x848b35c9, "ieee80211_tx_status" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0x6de13801, "wait_for_completion" },
	{ 0x7e526bfa, "__x86_indirect_thunk_r10" },
	{ 0x7709baa0, "ssb_driver_unregister" },
	{ 0x4ca54681, "ssb_chipco_gpio_control" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0x7e431c15, "cordic_calc_iq" },
	{ 0x9f5febc5, "ieee80211_alloc_hw_nm" },
	{ 0xf813207a, "bcma_core_dma_translation" },
	{ 0x977f511b, "__mutex_init" },
	{ 0xc5850110, "printk" },
	{ 0x2af4b11a, "led_classdev_register_ext" },
	{ 0x9c8bdd4a, "ieee80211_free_txskb" },
	{ 0x3c3fce39, "__local_bh_enable_ip" },
	{ 0x4c9d28b0, "phys_base" },
	{ 0x24b54c39, "ieee80211_wake_queues" },
	{ 0xa1c76e0a, "_cond_resched" },
	{ 0x318d6fec, "mutex_is_locked" },
	{ 0x1276b7e0, "ssb_device_enable" },
	{ 0xf7f271ce, "dma_direct_map_page" },
	{ 0x5792f848, "strlcpy" },
	{ 0x3ef84baf, "dma_alloc_attrs" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0x3dc4a595, "bcma_core_set_clockmode" },
	{ 0x92d5838e, "request_threaded_irq" },
	{ 0x92d070d, "__bcma_driver_register" },
	{ 0xb18156be, "skb_pull" },
	{ 0xab5ffe8c, "ieee80211_ctstoself_get" },
	{ 0x852036c1, "request_firmware_nowait" },
	{ 0x78041b8f, "byte_rev_table" },
	{ 0xe1e69f85, "ieee80211_queue_delayed_work" },
	{ 0xf559a7e9, "device_create_file" },
	{ 0xc6e6d2f7, "bcma_host_pci_irq_ctl" },
	{ 0x7cd8d75e, "page_offset_base" },
	{ 0x9ab0ed7c, "skb_queue_tail" },
	{ 0xc6cbbc89, "capable" },
	{ 0xe946d8a, "bcma_chipco_gpio_control" },
	{ 0x568ff55a, "dma_direct_unmap_page" },
	{ 0xb601be4c, "__x86_indirect_thunk_rdx" },
	{ 0x4c9b8d3c, "__ieee80211_get_rx_led_name" },
	{ 0x1adc005c, "bcma_core_is_enabled" },
	{ 0x1e7b4b98, "ssb_pmu_set_ldo_voltage" },
	{ 0x12a38747, "usleep_range" },
	{ 0xc62df2f3, "ssb_device_disable" },
	{ 0xbc21107a, "bcma_core_enable" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xc1e1b97f, "wiphy_rfkill_set_hw_state" },
	{ 0x9cb986f2, "vmalloc_base" },
	{ 0xd8bb6130, "bcma_driver_unregister" },
	{ 0xc8dad936, "bcma_core_pll_ctl" },
	{ 0x47941711, "_raw_spin_lock_irq" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xbfdcb43a, "__x86_indirect_thunk_r11" },
	{ 0xb678366f, "int_sqrt" },
	{ 0xb01c5e76, "dev_driver_string" },
	{ 0x6cfb19d0, "hwrng_register" },
	{ 0x9e68336d, "__ieee80211_get_tx_led_name" },
	{ 0xac9556f0, "ssb_set_devtypedata" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xcbd4898c, "fortify_panic" },
	{ 0x9a3e4bed, "kmem_cache_alloc_trace" },
	{ 0xdbf17652, "_raw_spin_lock" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0x17e93065, "ieee80211_wake_queue" },
	{ 0xcf2fd8e3, "ieee80211_generic_frame_duration" },
	{ 0x6bb64cbe, "__ieee80211_get_radio_led_name" },
	{ 0xf6ebc03b, "net_ratelimit" },
	{ 0x11cd5fa9, "ieee80211_register_hw" },
	{ 0xd52dbe7d, "led_classdev_unregister" },
	{ 0x1eb9516e, "round_jiffies_relative" },
	{ 0x37a0cba, "kfree" },
	{ 0x69acdf38, "memcpy" },
	{ 0x135f9e2b, "dma_direct_sync_single_for_device" },
	{ 0x71deb539, "request_firmware" },
	{ 0x74c134b9, "__sw_hweight32" },
	{ 0xe04cbb4c, "ieee80211_free_hw" },
	{ 0x7e9d378b, "ssb_bus_may_powerdown" },
	{ 0xf4733f31, "skb_dequeue" },
	{ 0xb742fd7, "simple_strtol" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0x29361773, "complete" },
	{ 0x656e4a6e, "snprintf" },
	{ 0x2b5f8ab6, "ssb_pcicore_dev_irqvecs_enable" },
	{ 0x15314fce, "consume_skb" },
	{ 0xff745c9e, "ssb_pmu_set_ldo_paref" },
	{ 0xb605aeff, "hwrng_unregister" },
	{ 0x9c160d9e, "skb_put" },
	{ 0xb855d37b, "ssb_device_is_enabled" },
	{ 0xeda53b19, "bcma_core_disable" },
	{ 0xede283d, "release_firmware" },
	{ 0x3288f11e, "ssb_pmu_spuravoid_pllupdate" },
	{ 0x9e7d6bd0, "__udelay" },
	{ 0xa637b975, "dma_ops" },
	{ 0x4b668bbe, "ieee80211_get_tkip_p1k_iv" },
	{ 0xd349171, "ieee80211_get_response_rate" },
	{ 0xc1514a3b, "free_irq" },
};

MODULE_INFO(depends, "mac80211,ssb,bcma,cfg80211,cordic");

MODULE_ALIAS("bcma:m04BFid0812rev11cl*");
MODULE_ALIAS("bcma:m04BFid0812rev15cl*");
MODULE_ALIAS("bcma:m04BFid0812rev17cl*");
MODULE_ALIAS("bcma:m04BFid0812rev18cl*");
MODULE_ALIAS("bcma:m04BFid0812rev1Ccl*");
MODULE_ALIAS("bcma:m04BFid0812rev1Dcl*");
MODULE_ALIAS("bcma:m04BFid0812rev1Ecl*");
MODULE_ALIAS("bcma:m04BFid0812rev28cl*");
MODULE_ALIAS("bcma:m04BFid0812rev2Acl*");
MODULE_ALIAS("ssb:v4243id0812rev05*");
MODULE_ALIAS("ssb:v4243id0812rev06*");
MODULE_ALIAS("ssb:v4243id0812rev07*");
MODULE_ALIAS("ssb:v4243id0812rev09*");
MODULE_ALIAS("ssb:v4243id0812rev0A*");
MODULE_ALIAS("ssb:v4243id0812rev0B*");
MODULE_ALIAS("ssb:v4243id0812rev0C*");
MODULE_ALIAS("ssb:v4243id0812rev0D*");
MODULE_ALIAS("ssb:v4243id0812rev0F*");
MODULE_ALIAS("ssb:v4243id0812rev10*");

MODULE_INFO(srcversion, "4FA93F2524656CE354CBF84");
