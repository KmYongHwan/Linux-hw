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
	.arch = MODULE_ARCH_INIT,
};

MODULE_INFO(intree, "Y");

#ifdef CONFIG_RETPOLINE
MODULE_INFO(retpoline, "Y");
#endif

static const struct modversion_info ____versions[]
__used __section(__versions) = {
	{ 0x7459220b, "module_layout" },
	{ 0xe93e49c3, "devres_free" },
	{ 0x75063c2e, "iio_kfifo_allocate" },
	{ 0x7cfd592b, "devres_alloc_node" },
	{ 0x217c7edf, "devm_iio_device_match" },
	{ 0xfdb49257, "iio_triggered_buffer_postenable" },
	{ 0xbb9a2e75, "iio_device_attach_buffer" },
	{ 0xd8d997b6, "devres_release" },
	{ 0x99b13df1, "iio_triggered_buffer_predisable" },
	{ 0xf6fe197d, "iio_kfifo_free" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x5680b13c, "devres_add" },
	{ 0x9c596159, "iio_alloc_pollfunc" },
	{ 0x68b4379d, "iio_dealloc_pollfunc" },
};

MODULE_INFO(depends, "kfifo_buf,industrialio");


MODULE_INFO(srcversion, "22C108E890DC32A58054AC2");
