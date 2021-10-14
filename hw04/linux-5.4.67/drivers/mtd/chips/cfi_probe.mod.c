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
	{ 0x6d751964, "unregister_mtd_chip_driver" },
	{ 0x4fdc5f62, "register_mtd_chip_driver" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x2640a560, "cfi_send_gen_cmd" },
	{ 0x591b528d, "cfi_build_cmd" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xafaa3258, "cfi_qry_mode_off" },
	{ 0xe7585d69, "cfi_qry_present" },
	{ 0x3c28af4, "cfi_qry_mode_on" },
	{ 0xc5850110, "printk" },
	{ 0x3f4439a7, "mtd_do_chip_probe" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "chipreg,cfi_util,gen_probe");


MODULE_INFO(srcversion, "B6ED73AE68A89944133A408");
