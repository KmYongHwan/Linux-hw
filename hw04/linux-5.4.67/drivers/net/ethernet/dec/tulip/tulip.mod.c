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
	{ 0x3ce4ca6f, "disable_irq" },
	{ 0x2d3385d3, "system_wq" },
	{ 0xaf45d87b, "pci_write_config_dword" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0xeed57dfe, "param_ops_int" },
	{ 0x445a81ce, "boot_cpu_data" },
	{ 0x8658a66c, "pci_disable_device" },
	{ 0x97e005d1, "netif_carrier_on" },
	{ 0xdf566a59, "__x86_indirect_thunk_r9" },
	{ 0x34b60257, "netif_carrier_off" },
	{ 0x56470118, "__warn_printk" },
	{ 0x3c12dfe, "cancel_work_sync" },
	{ 0x837b7b09, "__dynamic_pr_debug" },
	{ 0x68c544c7, "dma_direct_sync_single_for_cpu" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0x22690c6a, "pci_release_regions" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0x8c46224, "pci_enable_wake" },
	{ 0x445ce05b, "dma_free_attrs" },
	{ 0x97651e6c, "vmemmap_base" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0xbb3d2c11, "pv_ops" },
	{ 0x15ba50a6, "jiffies" },
	{ 0x526c95e, "__dynamic_netdev_dbg" },
	{ 0xd5209ccf, "__netdev_alloc_skb" },
	{ 0x23c20fb9, "netif_rx" },
	{ 0xa73e6a4b, "pci_set_master" },
	{ 0x97934ecf, "del_timer_sync" },
	{ 0x7e526bfa, "__x86_indirect_thunk_r10" },
	{ 0x6a14014e, "_dev_warn" },
	{ 0xfb578fc5, "memset" },
	{ 0x4fd745b8, "netif_tx_wake_queue" },
	{ 0x2ed7bb5f, "pci_restore_state" },
	{ 0xcbafa6b5, "pci_iounmap" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0xc5850110, "printk" },
	{ 0x4c9d28b0, "phys_base" },
	{ 0xa80ea35, "free_netdev" },
	{ 0xd4f82b0b, "register_netdev" },
	{ 0xf7f271ce, "dma_direct_map_page" },
	{ 0x5792f848, "strlcpy" },
	{ 0x3ef84baf, "dma_alloc_attrs" },
	{ 0x69dd3b5b, "crc32_le" },
	{ 0x3513190d, "__dev_kfree_skb_irq" },
	{ 0xc38c83b8, "mod_timer" },
	{ 0x24d273d1, "add_timer" },
	{ 0x92d5838e, "request_threaded_irq" },
	{ 0x890b3d61, "_dev_err" },
	{ 0x3145216f, "pci_dev_present" },
	{ 0x78041b8f, "byte_rev_table" },
	{ 0x7cd8d75e, "page_offset_base" },
	{ 0x568ff55a, "dma_direct_unmap_page" },
	{ 0xf29affd6, "netif_device_attach" },
	{ 0x9a43e199, "_dev_info" },
	{ 0xbb61b5d4, "netif_device_detach" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x9cb986f2, "vmalloc_base" },
	{ 0x47941711, "_raw_spin_lock_irq" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xe3e53082, "pci_read_config_dword" },
	{ 0x57c0cb89, "eth_type_trans" },
	{ 0xb01c5e76, "dev_driver_string" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x5aae2095, "pci_unregister_driver" },
	{ 0xdbf17652, "_raw_spin_lock" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0xefca05d5, "pci_set_power_state" },
	{ 0xe5c0e769, "netdev_warn" },
	{ 0xb1da8e4, "eth_validate_addr" },
	{ 0x6a86bc1, "iowrite16" },
	{ 0xfcec0987, "enable_irq" },
	{ 0x37a0cba, "kfree" },
	{ 0x69acdf38, "memcpy" },
	{ 0xbaed66b, "pci_request_regions" },
	{ 0xaad49c42, "param_array_ops" },
	{ 0x651df6f2, "dev_trans_start" },
	{ 0x135f9e2b, "dma_direct_sync_single_for_device" },
	{ 0x9dba8f45, "__pci_register_driver" },
	{ 0xc5534d64, "ioread16" },
	{ 0xc4e35547, "unregister_netdev" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0x136b2332, "pci_choose_state" },
	{ 0xcfa0d077, "pci_iomap" },
	{ 0x15314fce, "consume_skb" },
	{ 0x4a453f53, "iowrite32" },
	{ 0x9c160d9e, "skb_put" },
	{ 0x7ed451da, "pci_enable_device" },
	{ 0xb3b84165, "eth_mac_addr" },
	{ 0xa637b975, "dma_ops" },
	{ 0xe484e35f, "ioread32" },
	{ 0x34f20df7, "device_set_wakeup_enable" },
	{ 0xc1514a3b, "free_irq" },
	{ 0x896845d2, "pci_save_state" },
	{ 0x2192013e, "alloc_etherdev_mqs" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("pci:v00001011d00000009sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001011d00000019sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000011ADd00000002sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000010D9d00000512sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000010D9d00000531sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v0000125Bd00001400sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000011ADd0000C115sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001317d00000981sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001317d00000985sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001317d00001985sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001317d00009511sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000013D1d0000AB02sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000013D1d0000AB03sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000013D1d0000AB08sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v0000104Ad00000981sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v0000104Ad00002774sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001259d0000A120sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000011F6d00009881sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00000039sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001113d00001216sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001113d00001217sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001113d00009511sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001186d00001541sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001186d00001561sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001186d00001591sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000014F1d00001803sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001626d00008410sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001737d0000AB09sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001737d0000AB08sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000017B3d0000AB08sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000010B7d00009300sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000014EAd0000AB08sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001414d00000001sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001414d00000002sv*sd*bc*sc*i*");

MODULE_INFO(srcversion, "9F0A30AFF09F486900F2278");
