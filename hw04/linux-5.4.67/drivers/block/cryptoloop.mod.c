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
	{ 0xbfee3ad5, "loop_unregister_transfer" },
	{ 0xbc798255, "loop_register_transfer" },
	{ 0xfb578fc5, "memset" },
	{ 0x67d8bcc9, "crypto_skcipher_encrypt" },
	{ 0xfa6e62c1, "crypto_skcipher_decrypt" },
	{ 0xf888ca21, "sg_init_table" },
	{ 0xcbd4898c, "fortify_panic" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xa17f5f47, "crypto_alloc_sync_skcipher" },
	{ 0x69acdf38, "memcpy" },
	{ 0xb0e602eb, "memmove" },
	{ 0x1ac5d3cb, "strcspn" },
	{ 0x9166fada, "strncpy" },
	{ 0xc5850110, "printk" },
	{ 0x8f673234, "crypto_destroy_tfm" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "9F5E377D4A071E9767DFE2C");
