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
	{ 0x9ccec17e, "crypto_nhpoly1305_init" },
	{ 0x445a81ce, "boot_cpu_data" },
	{ 0x59b37b5f, "crypto_nhpoly1305_setkey" },
	{ 0xd986dad1, "kernel_fpu_begin" },
	{ 0xf4da941b, "crypto_unregister_shash" },
	{ 0xd7c75732, "crypto_register_shash" },
	{ 0xb5de5dbc, "crypto_nhpoly1305_update" },
	{ 0xe7ffd670, "crypto_nhpoly1305_update_helper" },
	{ 0x38722f80, "kernel_fpu_end" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x2cd27d30, "crypto_nhpoly1305_final" },
	{ 0x73dd54eb, "irq_fpu_usable" },
};

MODULE_INFO(depends, "nhpoly1305");


MODULE_INFO(srcversion, "05C82954D19092AB5F962E8");
