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
	{ 0x899a7aa1, "matroxfb_g450_setpll_cond" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0xc5850110, "printk" },
	{ 0x32445a39, "matroxfb_vgaHWrestore" },
	{ 0x59e6d30f, "matroxfb_vgaHWinit" },
	{ 0x3fd5677a, "g450_mnp2f" },
	{ 0xfa8d61fb, "matroxfb_DAC_out" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x2009c319, "matroxfb_DAC_in" },
	{ 0x25cf8049, "matroxfb_PLL_calcclock" },
	{ 0xe3e53082, "pci_read_config_dword" },
	{ 0x92a2077d, "matroxfb_g450_setclk" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
};

MODULE_INFO(depends, "g450_pll,matroxfb_misc");


MODULE_INFO(srcversion, "54FC625E16ACFC1924E90D8");
