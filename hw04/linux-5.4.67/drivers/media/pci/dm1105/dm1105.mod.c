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
	{ 0x50425fbf, "param_ops_short" },
	{ 0xaad49c42, "param_array_ops" },
	{ 0x5aae2095, "pci_unregister_driver" },
	{ 0x9dba8f45, "__pci_register_driver" },
	{ 0x890b3d61, "_dev_err" },
	{ 0xe93af497, "rc_free_device" },
	{ 0x8c03d20c, "destroy_workqueue" },
	{ 0xa24f23d8, "__request_module" },
	{ 0x6e9dd606, "__symbol_put" },
	{ 0x92d5838e, "request_threaded_irq" },
	{ 0xdf9208c0, "alloc_workqueue" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0x1e1c22e8, "rc_register_device" },
	{ 0x656e4a6e, "snprintf" },
	{ 0xe381324, "rc_allocate_device" },
	{ 0x3c2b291b, "dvb_register_frontend" },
	{ 0x868784cb, "__symbol_get" },
	{ 0xf9a482f9, "msleep" },
	{ 0x1d08f348, "dvb_net_init" },
	{ 0xb3927325, "dvb_dmxdev_init" },
	{ 0x67480317, "dvb_dmx_init" },
	{ 0x9a43e199, "_dev_info" },
	{ 0x562bf022, "dvb_register_adapter" },
	{ 0x1faadfbe, "i2c_bit_add_bus" },
	{ 0xb7146edb, "i2c_add_adapter" },
	{ 0xdd64e639, "strscpy" },
	{ 0x3ef84baf, "dma_alloc_attrs" },
	{ 0xcfa0d077, "pci_iomap" },
	{ 0xbaed66b, "pci_request_regions" },
	{ 0xa73e6a4b, "pci_set_master" },
	{ 0xf189e453, "dma_set_mask" },
	{ 0x7ed451da, "pci_enable_device" },
	{ 0x9a3e4bed, "kmem_cache_alloc_trace" },
	{ 0xedec5990, "kmalloc_caches" },
	{ 0xc5850110, "printk" },
	{ 0x9ca01f8e, "rc_keydown" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0x69acdf38, "memcpy" },
	{ 0xdcf60586, "dvb_dmx_swfilter_packets" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0x2d3385d3, "system_wq" },
	{ 0x37a0cba, "kfree" },
	{ 0x8658a66c, "pci_disable_device" },
	{ 0x22690c6a, "pci_release_regions" },
	{ 0xcbafa6b5, "pci_iounmap" },
	{ 0xc1514a3b, "free_irq" },
	{ 0x39932179, "i2c_del_adapter" },
	{ 0x7e56b741, "dvb_unregister_adapter" },
	{ 0x7b0d51ce, "dvb_dmx_release" },
	{ 0x678ab8bd, "dvb_dmxdev_release" },
	{ 0x4db52a6e, "dvb_unregister_frontend" },
	{ 0xbc4f0ef3, "dvb_net_release" },
	{ 0xb3ade458, "rc_unregister_device" },
	{ 0x445ce05b, "dma_free_attrs" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "rc-core,dvb-core,i2c-algo-bit");

MODULE_ALIAS("pci:v0000109Fd0000036Fsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v0000195Dd00001105sv*sd*bc*sc*i*");

MODULE_INFO(srcversion, "C24BADDBB50A7837BB43B7C");
