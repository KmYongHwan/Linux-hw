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
	{ 0xedec5990, "kmalloc_caches" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0xbb8d17fa, "iio_channel_release_all" },
	{ 0xe93e49c3, "devres_free" },
	{ 0x7cfd592b, "devres_alloc_node" },
	{ 0x5cd69984, "iio_buffer_init" },
	{ 0x7c5c22c2, "iio_update_buffers" },
	{ 0xd8d997b6, "devres_release" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x5680b13c, "devres_add" },
	{ 0x9a3e4bed, "kmem_cache_alloc_trace" },
	{ 0x37471bc8, "iio_channel_get_all" },
	{ 0x37a0cba, "kfree" },
	{ 0x777dd675, "iio_buffer_put" },
};

MODULE_INFO(depends, "industrialio");


MODULE_INFO(srcversion, "FDADE3D25FB1900198AE832");
