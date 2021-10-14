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
	{ 0x151f4898, "schedule_timeout_uninterruptible" },
	{ 0xbbc2f161, "snd_i2c_device_create" },
	{ 0xb847589, "snd_i2c_sendbytes" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x15ba50a6, "jiffies" },
	{ 0xc5850110, "printk" },
	{ 0xd3d70f53, "snd_ctl_notify" },
	{ 0x5701e5ff, "snd_i2c_device_free" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0x78041b8f, "byte_rev_table" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xc8635fcd, "snd_i2c_readbytes" },
	{ 0x9068ffbd, "snd_ctl_new1" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x9a3e4bed, "kmem_cache_alloc_trace" },
	{ 0x37a0cba, "kfree" },
	{ 0x5eca2bac, "snd_ctl_add" },
};

MODULE_INFO(depends, "snd-i2c,snd");


MODULE_INFO(srcversion, "B3AEF8F791FEBF3FFADD132");
