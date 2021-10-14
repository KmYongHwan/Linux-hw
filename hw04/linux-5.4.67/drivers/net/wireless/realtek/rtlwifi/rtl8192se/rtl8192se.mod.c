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
	{ 0xaf45d87b, "pci_write_config_dword" },
	{ 0xd3c90d5e, "rtl_pci_probe" },
	{ 0xfe896484, "rtl_cam_get_free_entry" },
	{ 0x1ed8b599, "__x86_indirect_thunk_r8" },
	{ 0xeed57dfe, "param_ops_int" },
	{ 0x9ce93bda, "rtl_ps_disable_nic" },
	{ 0x445a81ce, "boot_cpu_data" },
	{ 0x86f7be80, "rtl_get_tcb_desc" },
	{ 0xdf566a59, "__x86_indirect_thunk_r9" },
	{ 0x56470118, "__warn_printk" },
	{ 0xc29957c3, "__x86_indirect_thunk_rcx" },
	{ 0x90f69fdc, "rtl_efuse_shadow_map_update" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0x30a956d7, "rtl_query_rxpwrpercentage" },
	{ 0x3054dfcf, "param_ops_bool" },
	{ 0xba257562, "rtl_cam_add_one_entry" },
	{ 0x999e8297, "vfree" },
	{ 0x97651e6c, "vmemmap_base" },
	{ 0xbb3d2c11, "pv_ops" },
	{ 0xed7c8cf2, "rtl_evm_db_to_percentage" },
	{ 0x15ba50a6, "jiffies" },
	{ 0xd5209ccf, "__netdev_alloc_skb" },
	{ 0x3dc33ab9, "rtl_pci_resume" },
	{ 0x6a14014e, "_dev_warn" },
	{ 0xaa2fc820, "rtl_ps_enable_nic" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0x37befc70, "jiffies_to_msecs" },
	{ 0xc5850110, "printk" },
	{ 0x4c9d28b0, "phys_base" },
	{ 0x2921a4d4, "rtl_btc_status_false" },
	{ 0xf7f271ce, "dma_direct_map_page" },
	{ 0x831a3da1, "rtl_signal_scale_mapping" },
	{ 0x852036c1, "request_firmware_nowait" },
	{ 0x942865ae, "rtl_pci_suspend" },
	{ 0xeb2924d7, "rtlwifi_rate_mapping" },
	{ 0x7cd8d75e, "page_offset_base" },
	{ 0x5f898577, "rtl_pci_disconnect" },
	{ 0x40a9b349, "vzalloc" },
	{ 0x27562231, "rtl_rfreg_delay" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x9cb986f2, "vmalloc_base" },
	{ 0xeb5677a4, "ieee80211_find_sta" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xe3e53082, "pci_read_config_dword" },
	{ 0xb01c5e76, "dev_driver_string" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x5aae2095, "pci_unregister_driver" },
	{ 0xdbf17652, "_raw_spin_lock" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0xc311e0c2, "rtl_cam_mark_invalid" },
	{ 0x69acdf38, "memcpy" },
	{ 0x5c534434, "rtl_cam_del_entry" },
	{ 0xe117e8b9, "rtl_cam_empty_entry" },
	{ 0x9dba8f45, "__pci_register_driver" },
	{ 0xfc5824f4, "rtl_cam_reset_all_entry" },
	{ 0x29361773, "complete" },
	{ 0x895e90c6, "rtl_process_phyinfo" },
	{ 0x9c160d9e, "skb_put" },
	{ 0x6aa7114f, "efuse_read_1byte" },
	{ 0xede283d, "release_firmware" },
	{ 0xa637b975, "dma_ops" },
	{ 0x1b945315, "rtl_addr_delay" },
	{ 0x1f95edd, "param_ops_ullong" },
};

MODULE_INFO(depends, "rtlwifi,rtl_pci,mac80211");

MODULE_ALIAS("pci:v000010ECd00008192sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000010ECd00008171sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000010ECd00008172sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000010ECd00008173sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000010ECd00008174sv*sd*bc*sc*i*");

MODULE_INFO(srcversion, "4E4F0AE5497AF9A86780A34");
