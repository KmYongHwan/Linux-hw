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

MODULE_INFO(staging, "Y");

static const struct modversion_info ____versions[]
__used __section(__versions) = {
	{ 0x7459220b, "module_layout" },
	{ 0xdc7b4bf3, "comedi_driver_unregister" },
	{ 0x53d24fc5, "comedi_driver_register" },
	{ 0x9a43e199, "_dev_info" },
	{ 0xdb2044b2, "range_unipolar5" },
	{ 0x890b3d61, "_dev_err" },
	{ 0x76c6e165, "comedi_alloc_subdevices" },
	{ 0xc4882fa2, "comedi_find_subdevice_by_type" },
	{ 0xf9c0b663, "strlcat" },
	{ 0xc8dcc62a, "krealloc" },
	{ 0x9a3e4bed, "kmem_cache_alloc_trace" },
	{ 0xedec5990, "kmalloc_caches" },
	{ 0xf826980, "comedi_get_n_channels" },
	{ 0x75cfe9bb, "comedi_open" },
	{ 0x656e4a6e, "snprintf" },
	{ 0x27fbb5a5, "comedi_alloc_devpriv" },
	{ 0xbb25ecba, "comedi_dio_bitfield2" },
	{ 0xe1f547a0, "comedi_dio_get_config" },
	{ 0xb008510, "comedi_dio_config" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xf4a30e42, "comedi_close" },
	{ 0x37a0cba, "kfree" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "comedi,kcomedilib");


MODULE_INFO(srcversion, "0C64EC39205DB3E3E99A2F4");
