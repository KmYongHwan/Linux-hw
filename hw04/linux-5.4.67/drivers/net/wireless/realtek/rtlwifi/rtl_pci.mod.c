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
	.arch = MODULE_ARCH_INIT,
};

MODULE_INFO(intree, "Y");

#ifdef CONFIG_RETPOLINE
MODULE_INFO(retpoline, "Y");
#endif

static const struct modversion_info ____versions[]
__used __section(__versions) = {
	{ 0x7459220b, "module_layout" },
	{ 0x5d6a04c4, "ieee80211_rx_irqsafe" },
	{ 0xf9a482f9, "msleep" },
	{ 0x15965b7b, "rtl_swlps_beacon" },
	{ 0x41d3030f, "rtl_deinit_deferred_work" },
	{ 0x9ca2f355, "pci_read_config_byte" },
	{ 0x806067e, "rtl_efuse_ops_init" },
	{ 0xf189e453, "dma_set_mask" },
	{ 0x445a81ce, "boot_cpu_data" },
	{ 0x8658a66c, "pci_disable_device" },
	{ 0xf5bb5b4d, "rtl_deinit_core" },
	{ 0xb3635b01, "_raw_spin_lock_bh" },
	{ 0x22e71afc, "ieee80211_beacon_get_tim" },
	{ 0x56470118, "__warn_printk" },
	{ 0x3c12dfe, "cancel_work_sync" },
	{ 0xf36cc24f, "ieee80211_unregister_hw" },
	{ 0xd9073be6, "pci_write_config_byte" },
	{ 0x88c30f54, "__dev_kfree_skb_any" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0x22690c6a, "pci_release_regions" },
	{ 0x445ce05b, "dma_free_attrs" },
	{ 0x97651e6c, "vmemmap_base" },
	{ 0xafd29d36, "read_efuse_byte" },
	{ 0xbb3d2c11, "pv_ops" },
	{ 0x9078fc, "dma_set_coherent_mask" },
	{ 0x32fdf5b9, "rtl_collect_scan_list" },
	{ 0xd5209ccf, "__netdev_alloc_skb" },
	{ 0x6f3c3906, "ieee80211_stop_queue" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0x6de13801, "wait_for_completion" },
	{ 0xa73e6a4b, "pci_set_master" },
	{ 0x4e94cd48, "rtl_global_var" },
	{ 0xcbafa6b5, "pci_iounmap" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0x9f5febc5, "ieee80211_alloc_hw_nm" },
	{ 0xc5850110, "printk" },
	{ 0x847d4bdc, "rtl_init_core" },
	{ 0x4c9d28b0, "phys_base" },
	{ 0xfaef0ed, "__tasklet_schedule" },
	{ 0x62fdf67e, "rtl_action_proc" },
	{ 0x40fb4f1b, "pci_read_config_word" },
	{ 0xf7f271ce, "dma_direct_map_page" },
	{ 0x3ef84baf, "dma_alloc_attrs" },
	{ 0x8c03d20c, "destroy_workqueue" },
	{ 0x3513190d, "__dev_kfree_skb_irq" },
	{ 0x2d32cdfc, "rtl_lps_change_work_callback" },
	{ 0x9545af6d, "tasklet_init" },
	{ 0xa2ee1956, "rtl_init_rx_config" },
	{ 0x92d5838e, "request_threaded_irq" },
	{ 0xb18156be, "skb_pull" },
	{ 0x1d0b5393, "pci_enable_msi" },
	{ 0x42160169, "flush_workqueue" },
	{ 0xe523ad75, "synchronize_irq" },
	{ 0x82072614, "tasklet_kill" },
	{ 0x7cd8d75e, "page_offset_base" },
	{ 0x9ab0ed7c, "skb_queue_tail" },
	{ 0x568ff55a, "dma_direct_unmap_page" },
	{ 0xb601be4c, "__x86_indirect_thunk_rdx" },
	{ 0x97e05663, "rtl_tid_to_ac" },
	{ 0x49c41a57, "_raw_spin_unlock_bh" },
	{ 0xb2fcb56d, "queue_delayed_work_on" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x9cb986f2, "vmalloc_base" },
	{ 0x22a17cbd, "ieee80211_tx_status_irqsafe" },
	{ 0x3b6abb10, "rtl_ops" },
	{ 0x11aa2f15, "kfree_skb" },
	{ 0x6d1afd33, "rtl_deinit_rfkill" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xbfdcb43a, "__x86_indirect_thunk_r11" },
	{ 0xe3e53082, "pci_read_config_dword" },
	{ 0xb01c5e76, "dev_driver_string" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xb756e10d, "rtl_p2p_info" },
	{ 0xdbf17652, "_raw_spin_lock" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0x17e93065, "ieee80211_wake_queue" },
	{ 0x11cd5fa9, "ieee80211_register_hw" },
	{ 0x33ab015, "rtl_lps_leave" },
	{ 0xc566d9c5, "rtl_recognize_peer" },
	{ 0x37a0cba, "kfree" },
	{ 0x69acdf38, "memcpy" },
	{ 0xbaed66b, "pci_request_regions" },
	{ 0xdcd8746a, "rtl_is_special_data" },
	{ 0x527e1bd8, "pci_disable_msi" },
	{ 0x6c0883fc, "rtl_tx_ackqueue" },
	{ 0x84f55d17, "rtl_init_rfkill" },
	{ 0xe04cbb4c, "ieee80211_free_hw" },
	{ 0xf4733f31, "skb_dequeue" },
	{ 0x29361773, "complete" },
	{ 0xb6833350, "rtl_c2hcmd_enqueue" },
	{ 0xcfa0d077, "pci_iomap" },
	{ 0x15314fce, "consume_skb" },
	{ 0x9c160d9e, "skb_put" },
	{ 0x7ed451da, "pci_enable_device" },
	{ 0xa637b975, "dma_ops" },
	{ 0x294a2a5c, "rtl_tx_mgmt_proc" },
	{ 0x7357906b, "rtl_beacon_statistic" },
	{ 0xd0065fca, "pcie_capability_read_word" },
	{ 0xc1514a3b, "free_irq" },
};

MODULE_INFO(depends, "mac80211,rtlwifi");


MODULE_INFO(srcversion, "359AF533CEBD24E6328F94E");
