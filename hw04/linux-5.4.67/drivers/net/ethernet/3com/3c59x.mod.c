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
	{ 0xca0e475a, "ethtool_op_get_ts_info" },
	{ 0xe6689185, "ethtool_op_get_link" },
	{ 0xeed57dfe, "param_ops_int" },
	{ 0xaad49c42, "param_array_ops" },
	{ 0xb1da8e4, "eth_validate_addr" },
	{ 0xb3b84165, "eth_mac_addr" },
	{ 0x3b9b8b79, "eisa_driver_unregister" },
	{ 0x5aae2095, "pci_unregister_driver" },
	{ 0x7761bddc, "eisa_driver_register" },
	{ 0x9dba8f45, "__pci_register_driver" },
	{ 0x7e526bfa, "__x86_indirect_thunk_r10" },
	{ 0x890b3d61, "_dev_err" },
	{ 0xa1a544ef, "skb_tstamp_tx" },
	{ 0x88c30f54, "__dev_kfree_skb_any" },
	{ 0xbfc177bc, "iowrite32_rep" },
	{ 0xc8676d46, "skb_clone_tx_timestamp" },
	{ 0xbfdcb43a, "__x86_indirect_thunk_r11" },
	{ 0x135f9e2b, "dma_direct_sync_single_for_device" },
	{ 0x68c544c7, "dma_direct_sync_single_for_cpu" },
	{ 0x3513190d, "__dev_kfree_skb_irq" },
	{ 0xceb84250, "netif_schedule_queue" },
	{ 0xa00aca2a, "dql_completed" },
	{ 0xdbf17652, "_raw_spin_lock" },
	{ 0x23c20fb9, "netif_rx" },
	{ 0x57c0cb89, "eth_type_trans" },
	{ 0x3f0546a8, "ioread32_rep" },
	{ 0x9c160d9e, "skb_put" },
	{ 0x4c9d28b0, "phys_base" },
	{ 0xf7f271ce, "dma_direct_map_page" },
	{ 0x97651e6c, "vmemmap_base" },
	{ 0x7cd8d75e, "page_offset_base" },
	{ 0x56470118, "__warn_printk" },
	{ 0xb01c5e76, "dev_driver_string" },
	{ 0x9cb986f2, "vmalloc_base" },
	{ 0xd5209ccf, "__netdev_alloc_skb" },
	{ 0x445a81ce, "boot_cpu_data" },
	{ 0x92d5838e, "request_threaded_irq" },
	{ 0x568ff55a, "dma_direct_unmap_page" },
	{ 0xa637b975, "dma_ops" },
	{ 0x15314fce, "consume_skb" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xc1514a3b, "free_irq" },
	{ 0x4fd745b8, "netif_tx_wake_queue" },
	{ 0xf29affd6, "netif_device_attach" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0xbb61b5d4, "netif_device_detach" },
	{ 0x97934ecf, "del_timer_sync" },
	{ 0x4ea25709, "dql_reset" },
	{ 0x594bf15b, "ioport_map" },
	{ 0x85bd1608, "__request_region" },
	{ 0xbaed66b, "pci_request_regions" },
	{ 0x7ed451da, "pci_enable_device" },
	{ 0xd4f82b0b, "register_netdev" },
	{ 0x896845d2, "pci_save_state" },
	{ 0xcdca3691, "nr_irqs" },
	{ 0xcfa0d077, "pci_iomap" },
	{ 0x3ef84baf, "dma_alloc_attrs" },
	{ 0xd9073be6, "pci_write_config_byte" },
	{ 0x9ca2f355, "pci_read_config_byte" },
	{ 0xa73e6a4b, "pci_set_master" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x2192013e, "alloc_etherdev_mqs" },
	{ 0x848d372e, "iowrite8" },
	{ 0xbb3d2c11, "pv_ops" },
	{ 0x47941711, "_raw_spin_lock_irq" },
	{ 0x34b60257, "netif_carrier_off" },
	{ 0x837b7b09, "__dynamic_pr_debug" },
	{ 0xc38c83b8, "mod_timer" },
	{ 0x15ba50a6, "jiffies" },
	{ 0x97e005d1, "netif_carrier_on" },
	{ 0x4a453f53, "iowrite32" },
	{ 0x49c41a57, "_raw_spin_unlock_bh" },
	{ 0xb3635b01, "_raw_spin_lock_bh" },
	{ 0x1035c7c2, "__release_region" },
	{ 0xdbdf6c92, "ioport_resource" },
	{ 0xd20fc08f, "mii_check_media" },
	{ 0xf10de535, "ioread8" },
	{ 0xe484e35f, "ioread32" },
	{ 0x8c46224, "pci_enable_wake" },
	{ 0x34f20df7, "device_set_wakeup_enable" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0x68fb4f56, "generic_mii_ioctl" },
	{ 0x5792f848, "strlcpy" },
	{ 0x656e4a6e, "snprintf" },
	{ 0x9a4b70e5, "eisa_bus_type" },
	{ 0xd13be7fe, "pci_bus_type" },
	{ 0x90de418b, "mii_nway_restart" },
	{ 0x7404840e, "mii_ethtool_get_link_ksettings" },
	{ 0x5d4b2462, "mii_ethtool_set_link_ksettings" },
	{ 0x2ed7bb5f, "pci_restore_state" },
	{ 0xa80ea35, "free_netdev" },
	{ 0x22690c6a, "pci_release_regions" },
	{ 0x445ce05b, "dma_free_attrs" },
	{ 0x8658a66c, "pci_disable_device" },
	{ 0xefca05d5, "pci_set_power_state" },
	{ 0xc4e35547, "unregister_netdev" },
	{ 0xcbafa6b5, "pci_iounmap" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0xc5534d64, "ioread16" },
	{ 0xc5850110, "printk" },
	{ 0x6a86bc1, "iowrite16" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "mii");

MODULE_ALIAS("eisa:sTCM5920*");
MODULE_ALIAS("eisa:sTCM5970*");
MODULE_ALIAS("pci:v000010B7d00005900sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000010B7d00005920sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000010B7d00005970sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000010B7d00005950sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000010B7d00005951sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000010B7d00005952sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000010B7d00009000sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000010B7d00009001sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000010B7d00009004sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000010B7d00009005sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000010B7d00009006sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000010B7d0000900Asv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000010B7d00009050sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000010B7d00009051sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000010B7d00009054sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000010B7d00009055sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000010B7d00009058sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000010B7d0000905Asv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000010B7d00009200sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000010B7d00009202sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000010B7d00009800sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000010B7d00009805sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000010B7d00007646sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000010B7d00005055sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000010B7d00006055sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000010B7d00006056sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000010B7d00005B57sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000010B7d00005057sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000010B7d00005157sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000010B7d00005257sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000010B7d00006560sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000010B7d00006562sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000010B7d00006564sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000010B7d00004500sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000010B7d00009201sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000010B7d00001201sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000010B7d00001202sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000010B7d00009056sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000010B7d00009210sv*sd*bc*sc*i*");

MODULE_INFO(srcversion, "BB607BADDF1730A2B4DE2E8");
