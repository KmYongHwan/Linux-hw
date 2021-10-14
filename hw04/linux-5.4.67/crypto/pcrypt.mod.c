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
	{ 0x5ae189e3, "kset_unregister" },
	{ 0x21c22cea, "crypto_register_template" },
	{ 0xd876dcda, "padata_start" },
	{ 0x2241f188, "padata_stop" },
	{ 0x91d56fe1, "kset_create_and_add" },
	{ 0xaf573c21, "kernel_kobj" },
	{ 0x5f8d7e91, "crypto_spawn_tfm2" },
	{ 0xc5e4a5d1, "cpumask_next" },
	{ 0xb352177e, "find_first_bit" },
	{ 0x63c4d61f, "__bitmap_weight" },
	{ 0x5a5a2271, "__cpu_online_mask" },
	{ 0x17de3d5, "nr_cpu_ids" },
	{ 0x62eb7050, "aead_register_instance" },
	{ 0x656e4a6e, "snprintf" },
	{ 0xc8bd3f9e, "crypto_grab_aead" },
	{ 0x50e05f96, "padata_alloc_shell" },
	{ 0x9a3e4bed, "kmem_cache_alloc_trace" },
	{ 0xedec5990, "kmalloc_caches" },
	{ 0x9a11a0fc, "crypto_attr_alg_name" },
	{ 0xfdbd7a17, "crypto_get_attr_type" },
	{ 0xde69febd, "padata_free" },
	{ 0xfe736ff9, "kobject_uevent" },
	{ 0x80eea0d7, "kobject_add" },
	{ 0xdcd5ed1d, "padata_alloc_possible" },
	{ 0x37a0cba, "kfree" },
	{ 0x66d8adcb, "padata_free_shell" },
	{ 0x91995e29, "crypto_drop_spawn" },
	{ 0x8f673234, "crypto_destroy_tfm" },
	{ 0x5a9ed457, "crypto_aead_setkey" },
	{ 0x95195e25, "crypto_aead_setauthsize" },
	{ 0xcd47e287, "crypto_aead_encrypt" },
	{ 0xbb355e6, "padata_do_parallel" },
	{ 0x6c2b627a, "crypto_aead_decrypt" },
	{ 0xf0bb4327, "padata_do_serial" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "0A651C0E9871266E0B83014");
