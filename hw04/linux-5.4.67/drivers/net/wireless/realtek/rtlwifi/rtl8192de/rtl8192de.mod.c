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
	{ 0x1ed8b599, "__x86_indirect_thunk_r8" },
	{ 0xeed57dfe, "param_ops_int" },
	{ 0x1d10cdf9, "rtl_dm_diginit" },
	{ 0x9ce93bda, "rtl_ps_disable_nic" },
	{ 0x445a81ce, "boot_cpu_data" },
	{ 0x86f7be80, "rtl_get_tcb_desc" },
	{ 0xdf566a59, "__x86_indirect_thunk_r9" },
	{ 0x56470118, "__warn_printk" },
	{ 0xc29957c3, "__x86_indirect_thunk_rcx" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0x3054dfcf, "param_ops_bool" },
	{ 0xba257562, "rtl_cam_add_one_entry" },
	{ 0x999e8297, "vfree" },
	{ 0x97651e6c, "vmemmap_base" },
	{ 0xed7c8cf2, "rtl_evm_db_to_percentage" },
	{ 0x15ba50a6, "jiffies" },
	{ 0x98dd06eb, "rtl_phy_scan_operation_backup" },
	{ 0xd5209ccf, "__netdev_alloc_skb" },
	{ 0xe76ae805, "skb_queue_purge" },
	{ 0x3dc33ab9, "rtl_pci_resume" },
	{ 0x7e526bfa, "__x86_indirect_thunk_r10" },
	{ 0xaa2fc820, "rtl_ps_enable_nic" },
	{ 0x3fa12259, "rtl_get_hwinfo" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0x37befc70, "jiffies_to_msecs" },
	{ 0xc5850110, "printk" },
	{ 0x4c9d28b0, "phys_base" },
	{ 0x2921a4d4, "rtl_btc_status_false" },
	{ 0xf7f271ce, "dma_direct_map_page" },
	{ 0x4d1a1157, "skb_push" },
	{ 0x7fef3ea6, "rtl_fw_page_write" },
	{ 0x852036c1, "request_firmware_nowait" },
	{ 0x942865ae, "rtl_pci_suspend" },
	{ 0xeb2924d7, "rtlwifi_rate_mapping" },
	{ 0x7cd8d75e, "page_offset_base" },
	{ 0x5f898577, "rtl_pci_disconnect" },
	{ 0x40a9b349, "vzalloc" },
	{ 0x27562231, "rtl_rfreg_delay" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x9cb986f2, "vmalloc_base" },
	{ 0x11aa2f15, "kfree_skb" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xb01c5e76, "dev_driver_string" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xcbd4898c, "fortify_panic" },
	{ 0x5aae2095, "pci_unregister_driver" },
	{ 0x9a3e4bed, "kmem_cache_alloc_trace" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0xc311e0c2, "rtl_cam_mark_invalid" },
	{ 0x54824f58, "channel5g" },
	{ 0x37a0cba, "kfree" },
	{ 0x69acdf38, "memcpy" },
	{ 0x5c534434, "rtl_cam_del_entry" },
	{ 0xe117e8b9, "rtl_cam_empty_entry" },
	{ 0x9dba8f45, "__pci_register_driver" },
	{ 0xfc5824f4, "rtl_cam_reset_all_entry" },
	{ 0x9c160d9e, "skb_put" },
	{ 0xa637b975, "dma_ops" },
	{ 0x1b945315, "rtl_addr_delay" },
	{ 0x1f95edd, "param_ops_ullong" },
};

MODULE_INFO(depends, "rtlwifi,rtl_pci");

MODULE_ALIAS("pci:v000010ECd00008193sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000010ECd0000002Bsv*sd*bc*sc*i*");

MODULE_INFO(srcversion, "2EFC8F78F866BF96FB75323");
