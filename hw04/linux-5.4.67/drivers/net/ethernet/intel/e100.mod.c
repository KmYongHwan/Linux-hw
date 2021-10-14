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
	{ 0xeed57dfe, "param_ops_int" },
	{ 0xca0e475a, "ethtool_op_get_ts_info" },
	{ 0xb1da8e4, "eth_validate_addr" },
	{ 0x5aae2095, "pci_unregister_driver" },
	{ 0x9dba8f45, "__pci_register_driver" },
	{ 0x3f9d1335, "napi_complete_done" },
	{ 0x7b092212, "netif_receive_skb" },
	{ 0x57c0cb89, "eth_type_trans" },
	{ 0xbfdcb43a, "__x86_indirect_thunk_r11" },
	{ 0x1ed8b599, "__x86_indirect_thunk_r8" },
	{ 0x7c1e39e2, "mii_ethtool_sset" },
	{ 0xcc5005fe, "msleep_interruptible" },
	{ 0x6e720ff2, "rtnl_unlock" },
	{ 0xc7a4fbed, "rtnl_lock" },
	{ 0x2ed7bb5f, "pci_restore_state" },
	{ 0xf29affd6, "netif_device_attach" },
	{ 0x8c46224, "pci_enable_wake" },
	{ 0x92d5838e, "request_threaded_irq" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0x135f9e2b, "dma_direct_sync_single_for_device" },
	{ 0x4c9d28b0, "phys_base" },
	{ 0x56470118, "__warn_printk" },
	{ 0xb01c5e76, "dev_driver_string" },
	{ 0xa1a544ef, "skb_tstamp_tx" },
	{ 0xc8676d46, "skb_clone_tx_timestamp" },
	{ 0xf7f271ce, "dma_direct_map_page" },
	{ 0x97651e6c, "vmemmap_base" },
	{ 0x7cd8d75e, "page_offset_base" },
	{ 0x445a81ce, "boot_cpu_data" },
	{ 0x9cb986f2, "vmalloc_base" },
	{ 0x449ad0a7, "memcmp" },
	{ 0x68c544c7, "dma_direct_sync_single_for_cpu" },
	{ 0x9c160d9e, "skb_put" },
	{ 0xd5209ccf, "__netdev_alloc_skb" },
	{ 0x21815954, "pci_prepare_to_sleep" },
	{ 0xefca05d5, "pci_set_power_state" },
	{ 0xd368c71c, "pci_wake_from_d3" },
	{ 0x15af7f4, "system_state" },
	{ 0x90b8d10f, "pci_clear_master" },
	{ 0x896845d2, "pci_save_state" },
	{ 0xbb61b5d4, "netif_device_detach" },
	{ 0x34b60257, "netif_carrier_off" },
	{ 0x97934ecf, "del_timer_sync" },
	{ 0xc1514a3b, "free_irq" },
	{ 0xddce8d3c, "napi_disable" },
	{ 0x37a0cba, "kfree" },
	{ 0x4fd745b8, "netif_tx_wake_queue" },
	{ 0x88c30f54, "__dev_kfree_skb_any" },
	{ 0xdbf17652, "_raw_spin_lock" },
	{ 0x568ff55a, "dma_direct_unmap_page" },
	{ 0xa637b975, "dma_ops" },
	{ 0x2f7754a8, "dma_pool_free" },
	{ 0x15314fce, "consume_skb" },
	{ 0x71deb539, "request_firmware" },
	{ 0xede283d, "release_firmware" },
	{ 0x4629334c, "__preempt_count" },
	{ 0x754e62f4, "dma_pool_create" },
	{ 0xd4f82b0b, "register_netdev" },
	{ 0x8a7979c4, "pci_pme_active" },
	{ 0x3ef84baf, "dma_alloc_attrs" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0xcfa0d077, "pci_iomap" },
	{ 0xf189e453, "dma_set_mask" },
	{ 0xbaed66b, "pci_request_regions" },
	{ 0x6ab9090f, "netif_napi_add" },
	{ 0x9166fada, "strncpy" },
	{ 0x2192013e, "alloc_etherdev_mqs" },
	{ 0x68fb4f56, "generic_mii_ioctl" },
	{ 0x5792f848, "strlcpy" },
	{ 0xc5534d64, "ioread16" },
	{ 0x90de418b, "mii_nway_restart" },
	{ 0x7404840e, "mii_ethtool_get_link_ksettings" },
	{ 0x5d4b2462, "mii_ethtool_set_link_ksettings" },
	{ 0xc38c83b8, "mod_timer" },
	{ 0x91eb9b4, "round_jiffies" },
	{ 0x15ba50a6, "jiffies" },
	{ 0xbb3d2c11, "pv_ops" },
	{ 0x47941711, "_raw_spin_lock_irq" },
	{ 0x403f2b94, "mii_check_link" },
	{ 0x1c7b51a6, "mii_ethtool_gset" },
	{ 0xc002153b, "mii_link_ok" },
	{ 0x34f20df7, "device_set_wakeup_enable" },
	{ 0x8658a66c, "pci_disable_device" },
	{ 0x22690c6a, "pci_release_regions" },
	{ 0xa80ea35, "free_netdev" },
	{ 0xb5aa7165, "dma_pool_destroy" },
	{ 0xcbafa6b5, "pci_iounmap" },
	{ 0xc4e35547, "unregister_netdev" },
	{ 0x445ce05b, "dma_free_attrs" },
	{ 0xc5850110, "printk" },
	{ 0xa73e6a4b, "pci_set_master" },
	{ 0x7ed451da, "pci_enable_device" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0x2d3385d3, "system_wq" },
	{ 0xf3744f5f, "netdev_info" },
	{ 0xdf566a59, "__x86_indirect_thunk_r9" },
	{ 0x4b2dcc89, "netdev_err" },
	{ 0xe484e35f, "ioread32" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xf9a482f9, "msleep" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0x4a453f53, "iowrite32" },
	{ 0x678b96ec, "dma_pool_alloc" },
	{ 0x69acdf38, "memcpy" },
	{ 0x87b4f5a9, "netdev_printk" },
	{ 0x6a641f96, "__napi_schedule" },
	{ 0xe3611c52, "napi_schedule_prep" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0xf10de535, "ioread8" },
	{ 0x848d372e, "iowrite8" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "mii");

MODULE_ALIAS("pci:v00008086d00001029sv*sd*bc02sc00i*");
MODULE_ALIAS("pci:v00008086d00001030sv*sd*bc02sc00i*");
MODULE_ALIAS("pci:v00008086d00001031sv*sd*bc02sc00i*");
MODULE_ALIAS("pci:v00008086d00001032sv*sd*bc02sc00i*");
MODULE_ALIAS("pci:v00008086d00001033sv*sd*bc02sc00i*");
MODULE_ALIAS("pci:v00008086d00001034sv*sd*bc02sc00i*");
MODULE_ALIAS("pci:v00008086d00001038sv*sd*bc02sc00i*");
MODULE_ALIAS("pci:v00008086d00001039sv*sd*bc02sc00i*");
MODULE_ALIAS("pci:v00008086d0000103Asv*sd*bc02sc00i*");
MODULE_ALIAS("pci:v00008086d0000103Bsv*sd*bc02sc00i*");
MODULE_ALIAS("pci:v00008086d0000103Csv*sd*bc02sc00i*");
MODULE_ALIAS("pci:v00008086d0000103Dsv*sd*bc02sc00i*");
MODULE_ALIAS("pci:v00008086d0000103Esv*sd*bc02sc00i*");
MODULE_ALIAS("pci:v00008086d00001050sv*sd*bc02sc00i*");
MODULE_ALIAS("pci:v00008086d00001051sv*sd*bc02sc00i*");
MODULE_ALIAS("pci:v00008086d00001052sv*sd*bc02sc00i*");
MODULE_ALIAS("pci:v00008086d00001053sv*sd*bc02sc00i*");
MODULE_ALIAS("pci:v00008086d00001054sv*sd*bc02sc00i*");
MODULE_ALIAS("pci:v00008086d00001055sv*sd*bc02sc00i*");
MODULE_ALIAS("pci:v00008086d00001056sv*sd*bc02sc00i*");
MODULE_ALIAS("pci:v00008086d00001057sv*sd*bc02sc00i*");
MODULE_ALIAS("pci:v00008086d00001059sv*sd*bc02sc00i*");
MODULE_ALIAS("pci:v00008086d00001064sv*sd*bc02sc00i*");
MODULE_ALIAS("pci:v00008086d00001065sv*sd*bc02sc00i*");
MODULE_ALIAS("pci:v00008086d00001066sv*sd*bc02sc00i*");
MODULE_ALIAS("pci:v00008086d00001067sv*sd*bc02sc00i*");
MODULE_ALIAS("pci:v00008086d00001068sv*sd*bc02sc00i*");
MODULE_ALIAS("pci:v00008086d00001069sv*sd*bc02sc00i*");
MODULE_ALIAS("pci:v00008086d0000106Asv*sd*bc02sc00i*");
MODULE_ALIAS("pci:v00008086d0000106Bsv*sd*bc02sc00i*");
MODULE_ALIAS("pci:v00008086d00001091sv*sd*bc02sc00i*");
MODULE_ALIAS("pci:v00008086d00001092sv*sd*bc02sc00i*");
MODULE_ALIAS("pci:v00008086d00001093sv*sd*bc02sc00i*");
MODULE_ALIAS("pci:v00008086d00001094sv*sd*bc02sc00i*");
MODULE_ALIAS("pci:v00008086d00001095sv*sd*bc02sc00i*");
MODULE_ALIAS("pci:v00008086d000010FEsv*sd*bc02sc00i*");
MODULE_ALIAS("pci:v00008086d00001209sv*sd*bc02sc00i*");
MODULE_ALIAS("pci:v00008086d00001229sv*sd*bc02sc00i*");
MODULE_ALIAS("pci:v00008086d00002449sv*sd*bc02sc00i*");
MODULE_ALIAS("pci:v00008086d00002459sv*sd*bc02sc00i*");
MODULE_ALIAS("pci:v00008086d0000245Dsv*sd*bc02sc00i*");
MODULE_ALIAS("pci:v00008086d000027DCsv*sd*bc02sc00i*");

MODULE_INFO(srcversion, "0B88C8371DD1F639B775A8F");
