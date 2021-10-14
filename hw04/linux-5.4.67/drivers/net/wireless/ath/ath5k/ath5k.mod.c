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
	{ 0x1df657e7, "ieee80211_rts_duration" },
	{ 0x4d553332, "ieee80211_rx_napi" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0x1c7ec4a3, "pci_release_region" },
	{ 0x9ca2f355, "pci_read_config_byte" },
	{ 0xe7fba065, "ieee80211_queue_work" },
	{ 0x9c64fbd, "ieee80211_frequency_to_channel" },
	{ 0xf189e453, "dma_set_mask" },
	{ 0x445a81ce, "boot_cpu_data" },
	{ 0x6aa619a8, "pci_match_id" },
	{ 0x8658a66c, "pci_disable_device" },
	{ 0x47939e0d, "__tasklet_hi_schedule" },
	{ 0x71c7a57c, "ath_key_delete" },
	{ 0xb3635b01, "_raw_spin_lock_bh" },
	{ 0x7ef39823, "ieee80211_hdrlen" },
	{ 0xffeedf6a, "delayed_work_timer_fn" },
	{ 0x22e71afc, "ieee80211_beacon_get_tim" },
	{ 0xfcee8a3, "ath_regd_init" },
	{ 0x56470118, "__warn_printk" },
	{ 0xf36cc24f, "ieee80211_unregister_hw" },
	{ 0x9791d2e6, "ieee80211_channel_to_frequency" },
	{ 0xd9073be6, "pci_write_config_byte" },
	{ 0x88c30f54, "__dev_kfree_skb_any" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0x3054dfcf, "param_ops_bool" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0x9fa7184a, "cancel_delayed_work_sync" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x4984453c, "ieee80211_iterate_active_interfaces_atomic" },
	{ 0x445ce05b, "dma_free_attrs" },
	{ 0x97651e6c, "vmemmap_base" },
	{ 0xa82f8d7f, "sysfs_remove_group" },
	{ 0xbb3d2c11, "pv_ops" },
	{ 0x15ba50a6, "jiffies" },
	{ 0xbeebc4cd, "ieee80211_stop_queues" },
	{ 0x6f3c3906, "ieee80211_stop_queue" },
	{ 0x848b35c9, "ieee80211_tx_status" },
	{ 0xa73e6a4b, "pci_set_master" },
	{ 0x7e526bfa, "__x86_indirect_thunk_r10" },
	{ 0xcbafa6b5, "pci_iounmap" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0x9f5febc5, "ieee80211_alloc_hw_nm" },
	{ 0x977f511b, "__mutex_init" },
	{ 0xc5850110, "printk" },
	{ 0x2af4b11a, "led_classdev_register_ext" },
	{ 0x9c8bdd4a, "ieee80211_free_txskb" },
	{ 0xc2107c52, "sysfs_create_group" },
	{ 0x4c9d28b0, "phys_base" },
	{ 0x24b54c39, "ieee80211_wake_queues" },
	{ 0xfaef0ed, "__tasklet_schedule" },
	{ 0x9166fada, "strncpy" },
	{ 0x3b54670, "ath_is_mybeacon" },
	{ 0xf7f271ce, "dma_direct_map_page" },
	{ 0x4571aea8, "ath_is_world_regd" },
	{ 0x3ef84baf, "dma_alloc_attrs" },
	{ 0x4d1a1157, "skb_push" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0x9545af6d, "tasklet_init" },
	{ 0x92d5838e, "request_threaded_irq" },
	{ 0x8c8569cb, "kstrtoint" },
	{ 0xb18156be, "skb_pull" },
	{ 0x890b3d61, "_dev_err" },
	{ 0xe1e69f85, "ieee80211_queue_delayed_work" },
	{ 0xe523ad75, "synchronize_irq" },
	{ 0x6e39fcff, "ath_reg_notifier_apply" },
	{ 0x92129d68, "wiphy_to_ieee80211_hw" },
	{ 0x82072614, "tasklet_kill" },
	{ 0x7cd8d75e, "page_offset_base" },
	{ 0x568ff55a, "dma_direct_unmap_page" },
	{ 0x9a43e199, "_dev_info" },
	{ 0xc38973ed, "pci_disable_link_state" },
	{ 0x786e7ee7, "ath_hw_get_listen_time" },
	{ 0xf08b651e, "ath_regd_get_band_ctl" },
	{ 0x4c9b8d3c, "__ieee80211_get_rx_led_name" },
	{ 0x12a38747, "usleep_range" },
	{ 0x49c41a57, "_raw_spin_unlock_bh" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xc1e1b97f, "wiphy_rfkill_set_hw_state" },
	{ 0x9cb986f2, "vmalloc_base" },
	{ 0xb8b9f817, "kmalloc_order_trace" },
	{ 0x69fb1ee7, "ath_hw_cycle_counters_update" },
	{ 0x22d12f50, "ieee80211_get_tx_rates" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0x120dd73c, "ieee80211_get_buffered_bc" },
	{ 0xb01c5e76, "dev_driver_string" },
	{ 0x9e68336d, "__ieee80211_get_tx_led_name" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x5aae2095, "pci_unregister_driver" },
	{ 0xdbf17652, "_raw_spin_lock" },
	{ 0x108b188f, "ath_is_49ghz_allowed" },
	{ 0xa11eb42f, "ath_hw_setbssidmask" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0x17e93065, "ieee80211_wake_queue" },
	{ 0xcf2fd8e3, "ieee80211_generic_frame_duration" },
	{ 0xe374d806, "ieee80211_get_hdrlen_from_skb" },
	{ 0xf6ebc03b, "net_ratelimit" },
	{ 0x9a881f0a, "ieee80211_ctstoself_duration" },
	{ 0x11cd5fa9, "ieee80211_register_hw" },
	{ 0xd52dbe7d, "led_classdev_unregister" },
	{ 0x37a0cba, "kfree" },
	{ 0x96d0f5d9, "regulatory_hint" },
	{ 0xcecae8f5, "ath_rxbuf_alloc" },
	{ 0x9dba8f45, "__pci_register_driver" },
	{ 0xf05c7b8, "__x86_indirect_thunk_r15" },
	{ 0xe04cbb4c, "ieee80211_free_hw" },
	{ 0x656e4a6e, "snprintf" },
	{ 0xb0e602eb, "memmove" },
	{ 0xcfa0d077, "pci_iomap" },
	{ 0x15314fce, "consume_skb" },
	{ 0x17966a1b, "ath_key_config" },
	{ 0x4a453f53, "iowrite32" },
	{ 0x9c160d9e, "skb_put" },
	{ 0x7ed451da, "pci_enable_device" },
	{ 0x1d7a11a5, "ath_hw_keyreset" },
	{ 0x80fb2c60, "pci_request_region" },
	{ 0xa637b975, "dma_ops" },
	{ 0xe484e35f, "ioread32" },
	{ 0xc1514a3b, "free_irq" },
};

MODULE_INFO(depends, "mac80211,cfg80211,ath");

MODULE_ALIAS("pci:v0000168Cd00000207sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v0000168Cd00000007sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v0000168Cd00000011sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v0000168Cd00000012sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v0000168Cd00000013sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v0000A727d00000013sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000010B7d00000013sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v0000168Cd00001014sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v0000168Cd00000014sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v0000168Cd00000015sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v0000168Cd00000016sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v0000168Cd00000017sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v0000168Cd00000018sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v0000168Cd00000019sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v0000168Cd0000001Asv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v0000168Cd0000001Bsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v0000168Cd0000001Csv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v0000168Cd0000001Dsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v0000168Cd0000FF1Bsv*sd*bc*sc*i*");

MODULE_INFO(srcversion, "E66B6646296C330CAC1DAA0");
