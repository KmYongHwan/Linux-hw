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
	{ 0xedec5990, "kmalloc_caches" },
	{ 0xaadd771f, "snd_hda_gen_free" },
	{ 0xfcb5ec6b, "snd_hda_mixer_amp_volume_put" },
	{ 0xcd85dcf0, "snd_hda_gen_parse_auto_config" },
	{ 0x86f21871, "snd_hda_mixer_amp_tlv" },
	{ 0xbaa47330, "snd_hda_gen_build_pcms" },
	{ 0xe445e339, "snd_hda_jack_unsol_event" },
	{ 0x68564511, "snd_hda_mixer_amp_volume_get" },
	{ 0x7fe5c1dc, "snd_hda_gen_init" },
	{ 0x967179b1, "snd_hda_parse_pin_defcfg" },
	{ 0x7363cbd1, "__hda_codec_driver_register" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x9a3e4bed, "kmem_cache_alloc_trace" },
	{ 0x7754a569, "snd_hda_gen_add_kctl" },
	{ 0x56e8d49b, "snd_hda_codec_get_pincfg" },
	{ 0x511dd397, "hda_codec_driver_unregister" },
	{ 0xfb476272, "snd_hda_gen_spec_init" },
	{ 0x464d475b, "snd_hda_mixer_amp_volume_info" },
	{ 0x40984190, "snd_hda_gen_build_controls" },
};

MODULE_INFO(depends, "snd-hda-codec-generic,snd-hda-codec");

MODULE_ALIAS("hdaudio:v13F68888r*a01*");
MODULE_ALIAS("hdaudio:v13F69880r*a01*");
MODULE_ALIAS("hdaudio:v434D4980r*a01*");

MODULE_INFO(srcversion, "0495075ABF4090FC66DEA09");
