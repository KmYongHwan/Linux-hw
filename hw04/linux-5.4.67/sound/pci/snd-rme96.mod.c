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
	{ 0xd6ee688f, "vmalloc" },
	{ 0xeed57dfe, "param_ops_int" },
	{ 0x9ca2f355, "pci_read_config_byte" },
	{ 0xfffd89db, "copy_from_user_toio" },
	{ 0xa4191c0b, "memset_io" },
	{ 0x6dab80b0, "snd_pcm_period_elapsed" },
	{ 0x8658a66c, "pci_disable_device" },
	{ 0x342a2354, "copy_to_user_fromio" },
	{ 0xc4142837, "seq_printf" },
	{ 0xbf18174f, "snd_pcm_lib_mmap_iomem" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0x22690c6a, "pci_release_regions" },
	{ 0x3054dfcf, "param_ops_bool" },
	{ 0x999e8297, "vfree" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0xbb3d2c11, "pv_ops" },
	{ 0xd727ef13, "param_ops_charp" },
	{ 0xb9638db4, "snd_pcm_rate_to_rate_bit" },
	{ 0xda0385c8, "snd_pcm_hw_constraint_list" },
	{ 0x858d6bdd, "snd_pcm_set_ops" },
	{ 0xd3d70f53, "snd_ctl_notify" },
	{ 0x92d5838e, "request_threaded_irq" },
	{ 0x17e7d2e9, "snd_pcm_lib_ioctl" },
	{ 0x890b3d61, "_dev_err" },
	{ 0x876c2483, "snd_ctl_boolean_mono_info" },
	{ 0x65523885, "snd_card_new" },
	{ 0x81b69e41, "snd_ctl_enum_info" },
	{ 0x93a219c, "ioremap_nocache" },
	{ 0x12a38747, "usleep_range" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x47941711, "_raw_spin_lock_irq" },
	{ 0x9068ffbd, "snd_ctl_new1" },
	{ 0xb9e7429c, "memcpy_toio" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x5aae2095, "pci_unregister_driver" },
	{ 0xc06eefaf, "snd_pcm_set_sync" },
	{ 0x3eeb2322, "__wake_up" },
	{ 0x16cc630c, "snd_card_rw_proc_new" },
	{ 0xbaed66b, "pci_request_regions" },
	{ 0xaad49c42, "param_array_ops" },
	{ 0x605adfe9, "snd_pcm_hw_constraint_minmax" },
	{ 0xedc03953, "iounmap" },
	{ 0x7d628444, "memcpy_fromio" },
	{ 0x9dba8f45, "__pci_register_driver" },
	{ 0x68a57338, "snd_card_free" },
	{ 0x4b46eaf6, "snd_card_register" },
	{ 0xb5752134, "snd_pcm_new" },
	{ 0x5eca2bac, "snd_ctl_add" },
	{ 0x7ed451da, "pci_enable_device" },
	{ 0xc1514a3b, "free_irq" },
};

MODULE_INFO(depends, "snd,snd-pcm");

MODULE_ALIAS("pci:v000010EEd00003FC0sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000010EEd00003FC1sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000010EEd00003FC2sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000010EEd00003FC3sv*sd*bc*sc*i*");

MODULE_INFO(srcversion, "A48CBB80E724057F35DD3BA");
