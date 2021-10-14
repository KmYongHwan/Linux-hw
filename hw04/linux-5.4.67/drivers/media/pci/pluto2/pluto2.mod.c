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
	{ 0x50425fbf, "param_ops_short" },
	{ 0xaad49c42, "param_array_ops" },
	{ 0x5aae2095, "pci_unregister_driver" },
	{ 0x9dba8f45, "__pci_register_driver" },
	{ 0xc5850110, "printk" },
	{ 0x4c9d28b0, "phys_base" },
	{ 0x56470118, "__warn_printk" },
	{ 0xb01c5e76, "dev_driver_string" },
	{ 0x445a81ce, "boot_cpu_data" },
	{ 0x1d08f348, "dvb_net_init" },
	{ 0x3c2b291b, "dvb_register_frontend" },
	{ 0x87f91828, "tda10046_attach" },
	{ 0xb3927325, "dvb_dmxdev_init" },
	{ 0x67480317, "dvb_dmx_init" },
	{ 0x9a43e199, "_dev_info" },
	{ 0x562bf022, "dvb_register_adapter" },
	{ 0x1faadfbe, "i2c_bit_add_bus" },
	{ 0xdd64e639, "strscpy" },
	{ 0xf7f271ce, "dma_direct_map_page" },
	{ 0x97651e6c, "vmemmap_base" },
	{ 0x7cd8d75e, "page_offset_base" },
	{ 0x9cb986f2, "vmalloc_base" },
	{ 0x92d5838e, "request_threaded_irq" },
	{ 0xcfa0d077, "pci_iomap" },
	{ 0xbaed66b, "pci_request_regions" },
	{ 0xa73e6a4b, "pci_set_master" },
	{ 0xf189e453, "dma_set_mask" },
	{ 0xaf45d87b, "pci_write_config_dword" },
	{ 0x7ed451da, "pci_enable_device" },
	{ 0xb8b9f817, "kmalloc_order_trace" },
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
	{ 0x568ff55a, "dma_direct_unmap_page" },
	{ 0x890b3d61, "_dev_err" },
	{ 0xe6b0c66a, "dev_printk" },
	{ 0x135f9e2b, "dma_direct_sync_single_for_device" },
	{ 0x68c544c7, "dma_direct_sync_single_for_cpu" },
	{ 0xa637b975, "dma_ops" },
	{ 0xdcf60586, "dvb_dmx_swfilter_packets" },
	{ 0x71deb539, "request_firmware" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x9f1e215a, "i2c_transfer" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "dvb-core,tda1004x,i2c-algo-bit");

MODULE_ALIAS("pci:v00000432d00000001sv*sd*bc*sc*i*");

MODULE_INFO(srcversion, "7FDBF00DBE62524C705AE33");
