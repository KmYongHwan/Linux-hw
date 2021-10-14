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
	{ 0x2c2ca3f, "rtl_fw_cb" },
	{ 0xedec5990, "kmalloc_caches" },
	{ 0xd3c90d5e, "rtl_pci_probe" },
	{ 0xfe896484, "rtl_cam_get_free_entry" },
	{ 0x20abdda5, "rtl92c_phy_set_rfpath_switch" },
	{ 0x1ed8b599, "__x86_indirect_thunk_r8" },
	{ 0x2067ef49, "_rtl92c_phy_fw_rf_serial_read" },
	{ 0xeed57dfe, "param_ops_int" },
	{ 0x7218d72d, "rtl92c_phy_set_txpower_level" },
	{ 0x97747edd, "rtl92c_set_fw_rsvdpagepkt" },
	{ 0x95ef502, "rtl92c_dm_check_txpower_tracking" },
	{ 0x9ce93bda, "rtl_ps_disable_nic" },
	{ 0x3d8d28e6, "rtl92c_dm_watchdog" },
	{ 0x445a81ce, "boot_cpu_data" },
	{ 0xa235de4f, "_rtl92c_phy_init_bb_rf_register_definition" },
	{ 0x20de49ad, "_rtl92c_phy_rf_serial_write" },
	{ 0x86f7be80, "rtl_get_tcb_desc" },
	{ 0x9fb5b482, "_rtl92c_phy_rf_serial_read" },
	{ 0x4b4d3ddb, "rtl92c_phy_set_bw_mode" },
	{ 0xdf566a59, "__x86_indirect_thunk_r9" },
	{ 0x56470118, "__warn_printk" },
	{ 0x8f0e90, "rtl92c_phy_lc_calibrate" },
	{ 0x2327d91c, "_rtl92c_phy_calculate_bit_shift" },
	{ 0xc29957c3, "__x86_indirect_thunk_rcx" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0x30a956d7, "rtl_query_rxpwrpercentage" },
	{ 0x3054dfcf, "param_ops_bool" },
	{ 0xba257562, "rtl_cam_add_one_entry" },
	{ 0x999e8297, "vfree" },
	{ 0x97651e6c, "vmemmap_base" },
	{ 0xbb3d2c11, "pv_ops" },
	{ 0xed7c8cf2, "rtl_evm_db_to_percentage" },
	{ 0x15ba50a6, "jiffies" },
	{ 0x98dd06eb, "rtl_phy_scan_operation_backup" },
	{ 0x2b686f29, "rtl92c_dm_init_edca_turbo" },
	{ 0x5e7b46ff, "rtl92c_phy_iq_calibrate" },
	{ 0x4b47a035, "rtl92c_dm_init" },
	{ 0x84cbd175, "rtl92c_phy_set_bb_reg" },
	{ 0x3dc33ab9, "rtl_pci_resume" },
	{ 0xaa2fc820, "rtl_ps_enable_nic" },
	{ 0x3fa12259, "rtl_get_hwinfo" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0x745c616d, "rtl92c_firmware_selfreset" },
	{ 0x37befc70, "jiffies_to_msecs" },
	{ 0xc5850110, "printk" },
	{ 0xbb4060df, "rtl92c_dm_rf_saving" },
	{ 0xe7913606, "rtl92c_set_fw_pwrmode_cmd" },
	{ 0x4c9d28b0, "phys_base" },
	{ 0x2921a4d4, "rtl_btc_status_false" },
	{ 0xf7f271ce, "dma_direct_map_page" },
	{ 0x42d7f80f, "_rtl92c_phy_fw_rf_serial_write" },
	{ 0x852036c1, "request_firmware_nowait" },
	{ 0x942865ae, "rtl_pci_suspend" },
	{ 0xeb2924d7, "rtlwifi_rate_mapping" },
	{ 0xa3aaad52, "rtl92c_set_fw_joinbss_report_cmd" },
	{ 0x7cd8d75e, "page_offset_base" },
	{ 0xdc6a38c9, "rtl92c_download_fw" },
	{ 0x5f898577, "rtl_pci_disconnect" },
	{ 0x40a9b349, "vzalloc" },
	{ 0x27562231, "rtl_rfreg_delay" },
	{ 0xbb58bd24, "_rtl92c_store_pwrindex_diffrate_offset" },
	{ 0x90a6455, "rtl92c_phy_set_io_cmd" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x9cb986f2, "vmalloc_base" },
	{ 0xeb5677a4, "ieee80211_find_sta" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xb01c5e76, "dev_driver_string" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x5aae2095, "pci_unregister_driver" },
	{ 0x9a3e4bed, "kmem_cache_alloc_trace" },
	{ 0xdbf17652, "_raw_spin_lock" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0xc311e0c2, "rtl_cam_mark_invalid" },
	{ 0x94e5fb96, "rtl92c_phy_rf_config" },
	{ 0x37a0cba, "kfree" },
	{ 0x5c534434, "rtl_cam_del_entry" },
	{ 0x50bec5b7, "rtl92c_set_p2p_ps_offload_cmd" },
	{ 0xe117e8b9, "rtl_cam_empty_entry" },
	{ 0xd0a249a, "rtl92ce_phy_set_rf_on" },
	{ 0x9dba8f45, "__pci_register_driver" },
	{ 0xc5923cbc, "rtl92c_phy_query_bb_reg" },
	{ 0xfc5824f4, "rtl_cam_reset_all_entry" },
	{ 0x895e90c6, "rtl_process_phyinfo" },
	{ 0x6aa7114f, "efuse_read_1byte" },
	{ 0xbc3fa26, "_rtl92c_phy_bb8192c_config_parafile" },
	{ 0xa637b975, "dma_ops" },
	{ 0xf58df804, "rtl92c_fill_h2c_cmd" },
	{ 0xce81cda8, "rtl92c_phy_sw_chnl" },
	{ 0x1b945315, "rtl_addr_delay" },
	{ 0x1f95edd, "param_ops_ullong" },
};

MODULE_INFO(depends, "rtlwifi,rtl_pci,rtl8192c-common,mac80211");

MODULE_ALIAS("pci:v000010ECd00008191sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000010ECd00008178sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000010ECd00008177sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000010ECd00008176sv*sd*bc*sc*i*");

MODULE_INFO(srcversion, "B0C27FAE4DAE18E802DA24E");
