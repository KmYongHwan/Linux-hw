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
	{ 0xb1da8e4, "eth_validate_addr" },
	{ 0xb3b84165, "eth_mac_addr" },
	{ 0xeed57dfe, "param_ops_int" },
	{ 0xaad49c42, "param_array_ops" },
	{ 0x5aae2095, "pci_unregister_driver" },
	{ 0x9dba8f45, "__pci_register_driver" },
	{ 0x3f9d1335, "napi_complete_done" },
	{ 0x135f9e2b, "dma_direct_sync_single_for_device" },
	{ 0x68c544c7, "dma_direct_sync_single_for_cpu" },
	{ 0x7b092212, "netif_receive_skb" },
	{ 0x57c0cb89, "eth_type_trans" },
	{ 0xbfdcb43a, "__x86_indirect_thunk_r11" },
	{ 0x15314fce, "consume_skb" },
	{ 0x9c160d9e, "skb_put" },
	{ 0xf29affd6, "netif_device_attach" },
	{ 0x2ed7bb5f, "pci_restore_state" },
	{ 0x7c1e39e2, "mii_ethtool_sset" },
	{ 0x92d5838e, "request_threaded_irq" },
	{ 0x5d4b2462, "mii_ethtool_set_link_ksettings" },
	{ 0xd5209ccf, "__netdev_alloc_skb" },
	{ 0x7e526bfa, "__x86_indirect_thunk_r10" },
	{ 0xbb61b5d4, "netif_device_detach" },
	{ 0xefca05d5, "pci_set_power_state" },
	{ 0x136b2332, "pci_choose_state" },
	{ 0x896845d2, "pci_save_state" },
	{ 0xc1514a3b, "free_irq" },
	{ 0x97934ecf, "del_timer_sync" },
	{ 0x568ff55a, "dma_direct_unmap_page" },
	{ 0x4fd745b8, "netif_tx_wake_queue" },
	{ 0x3c3fce39, "__local_bh_enable_ip" },
	{ 0x7a2af7b4, "cpu_number" },
	{ 0x4629334c, "__preempt_count" },
	{ 0xddce8d3c, "napi_disable" },
	{ 0x85bd1608, "__request_region" },
	{ 0xf189e453, "dma_set_mask" },
	{ 0xa73e6a4b, "pci_set_master" },
	{ 0x7ed451da, "pci_enable_device" },
	{ 0xc5850110, "printk" },
	{ 0xab600421, "probe_irq_off" },
	{ 0xb121390a, "probe_irq_on" },
	{ 0xd4f82b0b, "register_netdev" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0x6ab9090f, "netif_napi_add" },
	{ 0x3ef84baf, "dma_alloc_attrs" },
	{ 0x2192013e, "alloc_etherdev_mqs" },
	{ 0x593c1bac, "__x86_indirect_thunk_rbx" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0x4c9d28b0, "phys_base" },
	{ 0x88c30f54, "__dev_kfree_skb_any" },
	{ 0x56470118, "__warn_printk" },
	{ 0xb01c5e76, "dev_driver_string" },
	{ 0xf7f271ce, "dma_direct_map_page" },
	{ 0xa637b975, "dma_ops" },
	{ 0x97651e6c, "vmemmap_base" },
	{ 0x7cd8d75e, "page_offset_base" },
	{ 0x445a81ce, "boot_cpu_data" },
	{ 0x9cb986f2, "vmalloc_base" },
	{ 0xc38c83b8, "mod_timer" },
	{ 0x91eb9b4, "round_jiffies" },
	{ 0x15ba50a6, "jiffies" },
	{ 0x68fb4f56, "generic_mii_ioctl" },
	{ 0xfcec0987, "enable_irq" },
	{ 0x3ce4ca6f, "disable_irq" },
	{ 0x656e4a6e, "snprintf" },
	{ 0x5792f848, "strlcpy" },
	{ 0x90de418b, "mii_nway_restart" },
	{ 0x7404840e, "mii_ethtool_get_link_ksettings" },
	{ 0x8f996a30, "ethtool_convert_legacy_u32_to_link_mode" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0xf9a482f9, "msleep" },
	{ 0x8658a66c, "pci_disable_device" },
	{ 0xa80ea35, "free_netdev" },
	{ 0x1035c7c2, "__release_region" },
	{ 0xdbdf6c92, "ioport_resource" },
	{ 0xc4e35547, "unregister_netdev" },
	{ 0x445ce05b, "dma_free_attrs" },
	{ 0x37a0cba, "kfree" },
	{ 0xf3744f5f, "netdev_info" },
	{ 0x1c7b51a6, "mii_ethtool_gset" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x34b60257, "netif_carrier_off" },
	{ 0x97e005d1, "netif_carrier_on" },
	{ 0xc002153b, "mii_link_ok" },
	{ 0x69dd3b5b, "crc32_le" },
	{ 0x4b2dcc89, "netdev_err" },
	{ 0x87b4f5a9, "netdev_printk" },
	{ 0xbb3d2c11, "pv_ops" },
	{ 0x6a641f96, "__napi_schedule" },
	{ 0xe3611c52, "napi_schedule_prep" },
	{ 0xdbf17652, "_raw_spin_lock" },
	{ 0xce8b1878, "__x86_indirect_thunk_r14" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0xc29957c3, "__x86_indirect_thunk_rcx" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "mii");

MODULE_ALIAS("pci:v00001022d00002001sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001022d00002000sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001023d00002000sv*sd*bc02sc00i*");

MODULE_INFO(srcversion, "7CAB72D2511A8CBB44A27B5");
