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
	{ 0xa24f23d8, "__request_module" },
	{ 0xedec5990, "kmalloc_caches" },
	{ 0xb3ade458, "rc_unregister_device" },
	{ 0xf9a482f9, "msleep" },
	{ 0x6346cf09, "ir_raw_event_store_with_filter" },
	{ 0x67480317, "dvb_dmx_init" },
	{ 0x7e56b741, "dvb_unregister_adapter" },
	{ 0xf189e453, "dma_set_mask" },
	{ 0x3c2b291b, "dvb_register_frontend" },
	{ 0x8658a66c, "pci_disable_device" },
	{ 0x9f1e215a, "i2c_transfer" },
	{ 0x4db52a6e, "dvb_unregister_frontend" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0x445ce05b, "dma_free_attrs" },
	{ 0xdd64e639, "strscpy" },
	{ 0xe381324, "rc_allocate_device" },
	{ 0xbc4f0ef3, "dvb_net_release" },
	{ 0x815bcf4f, "dvb_frontend_detach" },
	{ 0xa73e6a4b, "pci_set_master" },
	{ 0xe93af497, "rc_free_device" },
	{ 0x50425fbf, "param_ops_short" },
	{ 0x678ab8bd, "dvb_dmxdev_release" },
	{ 0xc5850110, "printk" },
	{ 0x1d08f348, "dvb_net_init" },
	{ 0xfaef0ed, "__tasklet_schedule" },
	{ 0x3ef84baf, "dma_alloc_attrs" },
	{ 0x1e1c22e8, "rc_register_device" },
	{ 0x9545af6d, "tasklet_init" },
	{ 0x92d5838e, "request_threaded_irq" },
	{ 0x16779475, "i2c_unregister_device" },
	{ 0x890b3d61, "_dev_err" },
	{ 0x7b0d51ce, "dvb_dmx_release" },
	{ 0x1d0b5393, "pci_enable_msi" },
	{ 0x868784cb, "__symbol_get" },
	{ 0x82072614, "tasklet_kill" },
	{ 0xf720a60b, "module_put" },
	{ 0x39932179, "i2c_del_adapter" },
	{ 0x9a43e199, "_dev_info" },
	{ 0x93a219c, "ioremap_nocache" },
	{ 0xdcf60586, "dvb_dmx_swfilter_packets" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x562bf022, "dvb_register_adapter" },
	{ 0x5aae2095, "pci_unregister_driver" },
	{ 0x453c8403, "pci_msi_enabled" },
	{ 0x9a3e4bed, "kmem_cache_alloc_trace" },
	{ 0x5569741e, "__dynamic_dev_dbg" },
	{ 0x37a0cba, "kfree" },
	{ 0xaad49c42, "param_array_ops" },
	{ 0x527e1bd8, "pci_disable_msi" },
	{ 0xedc03953, "iounmap" },
	{ 0x9dba8f45, "__pci_register_driver" },
	{ 0x1faadfbe, "i2c_bit_add_bus" },
	{ 0x6e9dd606, "__symbol_put" },
	{ 0x656e4a6e, "snprintf" },
	{ 0x7ed451da, "pci_enable_device" },
	{ 0x1907fe72, "ir_raw_event_handle" },
	{ 0xa258faf8, "i2c_new_device" },
	{ 0x47a8c8a0, "try_module_get" },
	{ 0xc1514a3b, "free_irq" },
	{ 0xb3927325, "dvb_dmxdev_init" },
};

MODULE_INFO(depends, "rc-core,dvb-core,i2c-algo-bit");

MODULE_ALIAS("pci:v00001ADEd00003038sv00004254sd00000550bc*sc*i*");
MODULE_ALIAS("pci:v00001ADEd00003038sv00004254sd00000552bc*sc*i*");
MODULE_ALIAS("pci:v00001ADEd00003038sv00004254sd00005580bc*sc*i*");
MODULE_ALIAS("pci:v00001ADEd00003038sv000013C2sd00003016bc*sc*i*");

MODULE_INFO(srcversion, "4CABAB9B533FA932D90A450");
