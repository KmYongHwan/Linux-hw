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
	{ 0x74d22198, "phy_ethtool_set_link_ksettings" },
	{ 0x982fe6e6, "phy_ethtool_get_link_ksettings" },
	{ 0xe6689185, "ethtool_op_get_link" },
	{ 0xf2aa42ba, "platform_driver_unregister" },
	{ 0x9d2da1a6, "__platform_driver_register" },
	{ 0x88c30f54, "__dev_kfree_skb_any" },
	{ 0x6a641f96, "__napi_schedule" },
	{ 0xe3611c52, "napi_schedule_prep" },
	{ 0x3f9d1335, "napi_complete_done" },
	{ 0x83ff0628, "napi_gro_receive" },
	{ 0x57c0cb89, "eth_type_trans" },
	{ 0x9c160d9e, "skb_put" },
	{ 0x4c9d28b0, "phys_base" },
	{ 0x56470118, "__warn_printk" },
	{ 0xb01c5e76, "dev_driver_string" },
	{ 0xf7f271ce, "dma_direct_map_page" },
	{ 0x97651e6c, "vmemmap_base" },
	{ 0x7cd8d75e, "page_offset_base" },
	{ 0x15ba50a6, "jiffies" },
	{ 0x445a81ce, "boot_cpu_data" },
	{ 0x9cb986f2, "vmalloc_base" },
	{ 0xd5209ccf, "__netdev_alloc_skb" },
	{ 0x74a69856, "devm_kmalloc" },
	{ 0x3ef84baf, "dma_alloc_attrs" },
	{ 0xc1514a3b, "free_irq" },
	{ 0x82072614, "tasklet_kill" },
	{ 0x8d4bed43, "phy_disconnect" },
	{ 0x5a889429, "phy_stop" },
	{ 0xddce8d3c, "napi_disable" },
	{ 0xf4358872, "devm_kfree" },
	{ 0x445ce05b, "dma_free_attrs" },
	{ 0x568ff55a, "dma_direct_unmap_page" },
	{ 0xa637b975, "dma_ops" },
	{ 0x15314fce, "consume_skb" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0x12a38747, "usleep_range" },
	{ 0xa1c76e0a, "_cond_resched" },
	{ 0xb43f9365, "ktime_get" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x37a0cba, "kfree" },
	{ 0x6ab9090f, "netif_napi_add" },
	{ 0x79aa04a2, "get_random_bytes" },
	{ 0x85540ebc, "nvmem_cell_put" },
	{ 0x99f018c4, "nvmem_cell_read" },
	{ 0xf04680a5, "nvmem_cell_get" },
	{ 0x2192013e, "alloc_etherdev_mqs" },
	{ 0xb3b84165, "eth_mac_addr" },
	{ 0x4b2dcc89, "netdev_err" },
	{ 0xa80ea35, "free_netdev" },
	{ 0x4b28aef1, "mdiobus_unregister" },
	{ 0xc4e35547, "unregister_netdev" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("of:N*T*Cni,xge-enet-2.00");
MODULE_ALIAS("of:N*T*Cni,xge-enet-2.00C*");
MODULE_ALIAS("of:N*T*Cni,xge-enet-3.00");
MODULE_ALIAS("of:N*T*Cni,xge-enet-3.00C*");

MODULE_INFO(srcversion, "8412291C954FE635A65C107");
