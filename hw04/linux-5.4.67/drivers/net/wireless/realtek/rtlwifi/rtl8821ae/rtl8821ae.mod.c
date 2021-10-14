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
	{ 0x8ea74299, "rtl_cam_delete_one_entry" },
	{ 0x2e5382f9, "rtl_fill_dummy" },
	{ 0x2c2ca3f, "rtl_fw_cb" },
	{ 0xedec5990, "kmalloc_caches" },
	{ 0xd3c90d5e, "rtl_pci_probe" },
	{ 0xfe896484, "rtl_cam_get_free_entry" },
	{ 0xf9a482f9, "msleep" },
	{ 0x1ed8b599, "__x86_indirect_thunk_r8" },
	{ 0xeed57dfe, "param_ops_int" },
	{ 0x9ca2f355, "pci_read_config_byte" },
	{ 0x1d10cdf9, "rtl_dm_diginit" },
	{ 0x9ce93bda, "rtl_ps_disable_nic" },
	{ 0xe9784e77, "rtl_btc_get_ops_pointer" },
	{ 0x423aedca, "rtl_hal_pwrseqcmdparsing" },
	{ 0x263ed23b, "__x86_indirect_thunk_r12" },
	{ 0x445a81ce, "boot_cpu_data" },
	{ 0x3c803f86, "rtl_mrate_idx_to_arfr_id" },
	{ 0xb3635b01, "_raw_spin_lock_bh" },
	{ 0x86f7be80, "rtl_get_tcb_desc" },
	{ 0xdf566a59, "__x86_indirect_thunk_r9" },
	{ 0x56470118, "__warn_printk" },
	{ 0x837b7b09, "__dynamic_pr_debug" },
	{ 0xc29957c3, "__x86_indirect_thunk_rcx" },
	{ 0xd9073be6, "pci_write_config_byte" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0x30a956d7, "rtl_query_rxpwrpercentage" },
	{ 0x3054dfcf, "param_ops_bool" },
	{ 0xba257562, "rtl_cam_add_one_entry" },
	{ 0x999e8297, "vfree" },
	{ 0x97651e6c, "vmemmap_base" },
	{ 0x953e1b9e, "ktime_get_real_seconds" },
	{ 0xbb3d2c11, "pv_ops" },
	{ 0xed7c8cf2, "rtl_evm_db_to_percentage" },
	{ 0x15ba50a6, "jiffies" },
	{ 0xd5209ccf, "__netdev_alloc_skb" },
	{ 0x3dc33ab9, "rtl_pci_resume" },
	{ 0xaa2fc820, "rtl_ps_enable_nic" },
	{ 0x3fa12259, "rtl_get_hwinfo" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0x576d038c, "rtl_wowlan_fw_cb" },
	{ 0x37befc70, "jiffies_to_msecs" },
	{ 0xc5850110, "printk" },
	{ 0x4c9d28b0, "phys_base" },
	{ 0xb038e24, "channel5g_80m" },
	{ 0x40fb4f1b, "pci_read_config_word" },
	{ 0xf7f271ce, "dma_direct_map_page" },
	{ 0x4d1a1157, "skb_push" },
	{ 0xc38c83b8, "mod_timer" },
	{ 0x7fef3ea6, "rtl_fw_page_write" },
	{ 0xcaf7b188, "efuse_shadow_read" },
	{ 0x831a3da1, "rtl_signal_scale_mapping" },
	{ 0x852036c1, "request_firmware_nowait" },
	{ 0x72bbc220, "rtl_set_tx_report" },
	{ 0x942865ae, "rtl_pci_suspend" },
	{ 0xeb2924d7, "rtlwifi_rate_mapping" },
	{ 0x7cd8d75e, "page_offset_base" },
	{ 0x5f898577, "rtl_pci_disconnect" },
	{ 0x568ff55a, "dma_direct_unmap_page" },
	{ 0xa62196e2, "rtl_cmd_send_packet" },
	{ 0x40a9b349, "vzalloc" },
	{ 0x49c41a57, "_raw_spin_unlock_bh" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x9cb986f2, "vmalloc_base" },
	{ 0x11aa2f15, "kfree_skb" },
	{ 0xeb5677a4, "ieee80211_find_sta" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xbfdcb43a, "__x86_indirect_thunk_r11" },
	{ 0xb01c5e76, "dev_driver_string" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xcbd4898c, "fortify_panic" },
	{ 0x5aae2095, "pci_unregister_driver" },
	{ 0x9a3e4bed, "kmem_cache_alloc_trace" },
	{ 0xdbf17652, "_raw_spin_lock" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0xc311e0c2, "rtl_cam_mark_invalid" },
	{ 0x54824f58, "channel5g" },
	{ 0x37a0cba, "kfree" },
	{ 0x69acdf38, "memcpy" },
	{ 0x5c534434, "rtl_cam_del_entry" },
	{ 0xe117e8b9, "rtl_cam_empty_entry" },
	{ 0x9dba8f45, "__pci_register_driver" },
	{ 0xfc5824f4, "rtl_cam_reset_all_entry" },
	{ 0x895e90c6, "rtl_process_phyinfo" },
	{ 0x9c160d9e, "skb_put" },
	{ 0xa637b975, "dma_ops" },
	{ 0x1f95edd, "param_ops_ullong" },
};

MODULE_INFO(depends, "rtlwifi,rtl_pci,btcoexist,mac80211");

MODULE_ALIAS("pci:v000010ECd00008812sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000010ECd00008821sv*sd*bc*sc*i*");

MODULE_INFO(srcversion, "A8B43BD1DD5C4F8EC9C4F6A");
