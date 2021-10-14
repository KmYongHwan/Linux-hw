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
	{ 0xd432c573, "crypto_unregister_template" },
	{ 0x21c22cea, "crypto_register_template" },
	{ 0x15b6a31b, "shash_free_instance" },
	{ 0xec2f17b8, "shash_register_instance" },
	{ 0x6094313f, "crypto_init_spawn" },
	{ 0x6ccb1ce7, "crypto_alloc_instance" },
	{ 0x80f91735, "crypto_mod_put" },
	{ 0x72b89a87, "crypto_attr_alg2" },
	{ 0x243f0b4b, "crypto_check_attr_type" },
	{ 0x1ae941bf, "crypto_spawn_tfm" },
	{ 0x8f673234, "crypto_destroy_tfm" },
	{ 0x69acdf38, "memcpy" },
	{ 0xfb578fc5, "memset" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "B48B6C523F6AB3768452ADD");
