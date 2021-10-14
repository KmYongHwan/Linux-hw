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
	{ 0xaf45d87b, "pci_write_config_dword" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0xc5850110, "printk" },
	{ 0x32445a39, "matroxfb_vgaHWrestore" },
	{ 0x59e6d30f, "matroxfb_vgaHWinit" },
	{ 0xfa8d61fb, "matroxfb_DAC_out" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x2009c319, "matroxfb_DAC_in" },
	{ 0x25cf8049, "matroxfb_PLL_calcclock" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "matroxfb_misc");


MODULE_INFO(srcversion, "009C295D924A1096375F7B6");
