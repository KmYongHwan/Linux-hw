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
	{ 0xf3744f5f, "netdev_info" },
	{ 0x8d4bed43, "phy_disconnect" },
	{ 0x1ed8b599, "__x86_indirect_thunk_r8" },
	{ 0x5f0b2042, "devm_ioremap_nocache" },
	{ 0xeed57dfe, "param_ops_int" },
	{ 0x77358855, "iomem_resource" },
	{ 0xa4191c0b, "memset_io" },
	{ 0xf189e453, "dma_set_mask" },
	{ 0x445a81ce, "boot_cpu_data" },
	{ 0x56470118, "__warn_printk" },
	{ 0x68c544c7, "dma_direct_sync_single_for_cpu" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0x97651e6c, "vmemmap_base" },
	{ 0x4b28aef1, "mdiobus_unregister" },
	{ 0x9078fc, "dma_set_coherent_mask" },
	{ 0x9d2da1a6, "__platform_driver_register" },
	{ 0xe6689185, "ethtool_op_get_link" },
	{ 0xbf023123, "mdiobus_free" },
	{ 0x4c9d28b0, "phys_base" },
	{ 0xa80ea35, "free_netdev" },
	{ 0xf7f271ce, "dma_direct_map_page" },
	{ 0x890b3d61, "_dev_err" },
	{ 0x7cd8d75e, "page_offset_base" },
	{ 0x982fe6e6, "phy_ethtool_get_link_ksettings" },
	{ 0x568ff55a, "dma_direct_unmap_page" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x9cb986f2, "vmalloc_base" },
	{ 0x9ec43e96, "platform_get_irq_byname" },
	{ 0xfef6ccb5, "__devm_request_region" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xb01c5e76, "dev_driver_string" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x4b2dcc89, "netdev_err" },
	{ 0x5569741e, "__dynamic_dev_dbg" },
	{ 0x24519c40, "platform_get_resource_byname" },
	{ 0xe5c0e769, "netdev_warn" },
	{ 0x74d22198, "phy_ethtool_set_link_ksettings" },
	{ 0x135f9e2b, "dma_direct_sync_single_for_device" },
	{ 0xc4e35547, "unregister_netdev" },
	{ 0x656e4a6e, "snprintf" },
	{ 0xf2aa42ba, "platform_driver_unregister" },
	{ 0xa637b975, "dma_ops" },
	{ 0xe484e35f, "ioread32" },
	{ 0x2192013e, "alloc_etherdev_mqs" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("of:N*T*Caltr,tse-msgdma-1.0");
MODULE_ALIAS("of:N*T*Caltr,tse-msgdma-1.0C*");
MODULE_ALIAS("of:N*T*Caltr,tse-1.0");
MODULE_ALIAS("of:N*T*Caltr,tse-1.0C*");
MODULE_ALIAS("of:N*T*CALTR,tse-1.0");
MODULE_ALIAS("of:N*T*CALTR,tse-1.0C*");

MODULE_INFO(srcversion, "598DD22748A07EE8578D445");
