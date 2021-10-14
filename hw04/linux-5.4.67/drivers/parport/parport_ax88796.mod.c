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
	{ 0x71a2b8d, "parport_ieee1284_read_byte" },
	{ 0x17650409, "parport_ieee1284_read_nibble" },
	{ 0xbb32992c, "parport_ieee1284_write_compat" },
	{ 0x52fb0af, "parport_ieee1284_ecp_write_addr" },
	{ 0xa812a767, "parport_ieee1284_ecp_read_data" },
	{ 0xf48f061e, "parport_ieee1284_ecp_write_data" },
	{ 0xc4a50aff, "parport_ieee1284_epp_read_addr" },
	{ 0x130a35d7, "parport_ieee1284_epp_write_addr" },
	{ 0xc998c123, "parport_ieee1284_epp_read_data" },
	{ 0xe2aa8366, "parport_ieee1284_epp_write_data" },
	{ 0xf2aa42ba, "platform_driver_unregister" },
	{ 0x9d2da1a6, "__platform_driver_register" },
	{ 0x3ce4ca6f, "disable_irq" },
	{ 0xd2595bc8, "parport_announce_port" },
	{ 0x9a43e199, "_dev_info" },
	{ 0x92d5838e, "request_threaded_irq" },
	{ 0x5e3a3912, "parport_irq_handler" },
	{ 0xd1b937d4, "parport_register_port" },
	{ 0xfd6e5b19, "platform_get_irq" },
	{ 0x93a219c, "ioremap_nocache" },
	{ 0x85bd1608, "__request_region" },
	{ 0xa943b224, "platform_get_resource" },
	{ 0x9a3e4bed, "kmem_cache_alloc_trace" },
	{ 0xedec5990, "kmalloc_caches" },
	{ 0xfcec0987, "enable_irq" },
	{ 0xbb3d2c11, "pv_ops" },
	{ 0x890b3d61, "_dev_err" },
	{ 0x37a0cba, "kfree" },
	{ 0x1035c7c2, "__release_region" },
	{ 0x77358855, "iomem_resource" },
	{ 0xedc03953, "iounmap" },
	{ 0x2604cb8a, "parport_remove_port" },
	{ 0xc1514a3b, "free_irq" },
	{ 0x5569741e, "__dynamic_dev_dbg" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "parport");


MODULE_INFO(srcversion, "2FCBBBFDDF4069F58DE7EA0");
