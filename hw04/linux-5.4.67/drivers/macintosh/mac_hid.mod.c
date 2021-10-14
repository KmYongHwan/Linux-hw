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
	{ 0x6be0d38b, "unregister_sysctl_table" },
	{ 0xf97d7de2, "register_sysctl_table" },
	{ 0x5ada0011, "input_event" },
	{ 0x2a26e84c, "input_free_device" },
	{ 0xcfad6a55, "input_register_handler" },
	{ 0xff76d558, "input_register_device" },
	{ 0xeebd5754, "input_allocate_device" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0xa8181adf, "proc_dointvec" },
	{ 0xbdff3e7d, "mutex_lock_killable" },
	{ 0x3f69beeb, "input_unregister_device" },
	{ 0xa86d5b90, "input_unregister_handler" },
	{ 0xc5850110, "printk" },
	{ 0x4537b65d, "input_open_device" },
	{ 0xccb201a5, "input_register_handle" },
	{ 0x9a3e4bed, "kmem_cache_alloc_trace" },
	{ 0xedec5990, "kmalloc_caches" },
	{ 0x37a0cba, "kfree" },
	{ 0xc95ae1ab, "input_unregister_handle" },
	{ 0x21fca503, "input_close_device" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("input:b*v*p*e*-e*1,*k*r*a*m*l*s*f*w*");

MODULE_INFO(srcversion, "3A15AB8478A81CD9BD77B3D");
